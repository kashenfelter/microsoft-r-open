
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicInternalFrameUI$BasicInternalFrameListener__
#define __javax_swing_plaf_basic_BasicInternalFrameUI$BasicInternalFrameListener__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace event
      {
          class InternalFrameEvent;
      }
      namespace plaf
      {
        namespace basic
        {
            class BasicInternalFrameUI;
            class BasicInternalFrameUI$BasicInternalFrameListener;
        }
      }
    }
  }
}

class javax::swing::plaf::basic::BasicInternalFrameUI$BasicInternalFrameListener : public ::java::lang::Object
{

public: // actually protected
  BasicInternalFrameUI$BasicInternalFrameListener(::javax::swing::plaf::basic::BasicInternalFrameUI *);
public:
  virtual void internalFrameActivated(::javax::swing::event::InternalFrameEvent *);
  virtual void internalFrameClosed(::javax::swing::event::InternalFrameEvent *);
  virtual void internalFrameClosing(::javax::swing::event::InternalFrameEvent *);
  virtual void internalFrameDeactivated(::javax::swing::event::InternalFrameEvent *);
  virtual void internalFrameDeiconified(::javax::swing::event::InternalFrameEvent *);
  virtual void internalFrameIconified(::javax::swing::event::InternalFrameEvent *);
  virtual void internalFrameOpened(::javax::swing::event::InternalFrameEvent *);
public: // actually package-private
  ::javax::swing::plaf::basic::BasicInternalFrameUI * __attribute__((aligned(__alignof__( ::java::lang::Object)))) this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_plaf_basic_BasicInternalFrameUI$BasicInternalFrameListener__