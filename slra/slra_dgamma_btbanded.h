class slraDGammaBTBanded : virtual public 
                                       slraDGamma {
  const slraStationaryStructure *myW;
  size_t  myD;
  
  gsl_vector *myTempWkColRow;
  gsl_matrix *myDGamma;
  
  gsl_matrix *myWk_R;
  gsl_matrix *myWkT_R;
  gsl_matrix *myN_k;

public:
  slraDGammaBTBanded( const slraStationaryStructure *s, int r );
  virtual ~slraDGammaBTBanded();
  int getD() const { return myD; }

  
  virtual void computeYrtDgammaYr( gsl_matrix *mgrad_r, gsl_matrix *R, gsl_vector *yr );
  virtual void computeDijGammaYr( gsl_vector *res, gsl_matrix *R, 
                   gsl_matrix *perm, int i, int j, gsl_vector *Yr );

};
