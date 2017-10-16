/* UserListActor.c generated by valac 0.30.1, the Vala compiler
 * generated from UserListActor.vala, do not modify */

/* -*- Mode: vala; indent-tabs-mode: nil; tab-width: 4 -*-*/

#include <glib.h>
#include <glib-object.h>
#include <clutter/clutter.h>
#include <gee.h>
#include <clutter-gtk/clutter-gtk.h>
#include <float.h>
#include <math.h>


#define TYPE_USER_LIST_ACTOR (user_list_actor_get_type ())
#define USER_LIST_ACTOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_USER_LIST_ACTOR, UserListActor))
#define USER_LIST_ACTOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_USER_LIST_ACTOR, UserListActorClass))
#define IS_USER_LIST_ACTOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_USER_LIST_ACTOR))
#define IS_USER_LIST_ACTOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_USER_LIST_ACTOR))
#define USER_LIST_ACTOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_USER_LIST_ACTOR, UserListActorClass))

typedef struct _UserListActor UserListActor;
typedef struct _UserListActorClass UserListActorClass;
typedef struct _UserListActorPrivate UserListActorPrivate;

#define TYPE_USER_LIST (user_list_get_type ())
#define USER_LIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_USER_LIST, UserList))
#define USER_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_USER_LIST, UserListClass))
#define IS_USER_LIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_USER_LIST))
#define IS_USER_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_USER_LIST))
#define USER_LIST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_USER_LIST, UserListClass))

typedef struct _UserList UserList;
typedef struct _UserListClass UserListClass;

#define TYPE_LOGIN_OPTION (login_option_get_type ())
#define LOGIN_OPTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_LOGIN_OPTION, LoginOption))
#define LOGIN_OPTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_LOGIN_OPTION, LoginOptionClass))
#define IS_LOGIN_OPTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_LOGIN_OPTION))
#define IS_LOGIN_OPTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_LOGIN_OPTION))
#define LOGIN_OPTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_LOGIN_OPTION, LoginOptionClass))

typedef struct _LoginOption LoginOption;
typedef struct _LoginOptionClass LoginOptionClass;

#define TYPE_LOGIN_BOX (login_box_get_type ())
#define LOGIN_BOX(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_LOGIN_BOX, LoginBox))
#define LOGIN_BOX_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_LOGIN_BOX, LoginBoxClass))
#define IS_LOGIN_BOX(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_LOGIN_BOX))
#define IS_LOGIN_BOX_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_LOGIN_BOX))
#define LOGIN_BOX_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_LOGIN_BOX, LoginBoxClass))

typedef struct _LoginBox LoginBox;
typedef struct _LoginBoxClass LoginBoxClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _Block1Data Block1Data;
typedef struct _Block2Data Block2Data;
typedef struct _Block3Data Block3Data;

struct _UserListActor {
	ClutterActor parent_instance;
	UserListActorPrivate * priv;
};

struct _UserListActorClass {
	ClutterActorClass parent_class;
};

struct _UserListActorPrivate {
	UserList* userlist;
	ClutterBoxLayout* grid;
	GeeHashMap* boxes;
};

struct _Block1Data {
	int _ref_count_;
	UserListActor* self;
	UserList* userlist;
};

struct _Block2Data {
	int _ref_count_;
	Block1Data * _data1_;
	LoginOption* user;
};

struct _Block3Data {
	int _ref_count_;
	UserListActor* self;
	LoginBox* box;
};


static gpointer user_list_actor_parent_class = NULL;

GType user_list_actor_get_type (void) G_GNUC_CONST;
GType user_list_get_type (void) G_GNUC_CONST;
GType login_option_get_type (void) G_GNUC_CONST;
GType login_box_get_type (void) G_GNUC_CONST;
#define USER_LIST_ACTOR_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_USER_LIST_ACTOR, UserListActorPrivate))
enum  {
	USER_LIST_ACTOR_DUMMY_PROPERTY
};
UserListActor* user_list_actor_new (UserList* userlist);
UserListActor* user_list_actor_construct (GType object_type, UserList* userlist);
static Block1Data* block1_data_ref (Block1Data* _data1_);
static void block1_data_unref (void * _userdata_);
static Block2Data* block2_data_ref (Block2Data* _data2_);
static void block2_data_unref (void * _userdata_);
gint user_list_get_size (UserList* self);
LoginOption* user_list_get_user (UserList* self, gint i);
LoginBox* login_box_new (LoginOption* user);
LoginBox* login_box_construct (GType object_type, LoginOption* user);
static gboolean _____lambda17_ (Block2Data* _data2_, ClutterButtonEvent* e);
void user_list_set_current_user (UserList* self, LoginOption* value);
static gboolean ______lambda17__clutter_actor_button_press_event (ClutterActor* _sender, ClutterButtonEvent* event, gpointer self);
static void __lambda18_ (UserListActor* self, LoginOption* user);
static void user_list_actor_animate_list (UserListActor* self, LoginOption* current_user, gint duration);
static void ___lambda18__user_list_current_user_changed (UserList* _sender, LoginOption* user, gpointer self);
static gfloat* user_list_actor_get_y_for_users (UserListActor* self, LoginOption* current_user, int* result_length1);
LoginOption* user_list_get_next (UserList* self, LoginOption* user);
LoginBox* user_list_actor_get_current_loginbox (UserListActor* self);
LoginOption* user_list_get_current_user (UserList* self);
ClutterBoxLayout* user_list_actor_get_grid_layout (UserListActor* self);
static Block3Data* block3_data_ref (Block3Data* _data3_);
static void block3_data_unref (void * _userdata_);
void login_box_set_selected (LoginBox* self, gboolean value);
static gboolean ______lambda19_ (Block3Data* _data3_);
void login_box_pass_focus (LoginBox* self);
static gboolean _______lambda19__gsource_func (gpointer self);
static void user_list_actor_finalize (GObject* obj);


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static Block1Data* block1_data_ref (Block1Data* _data1_) {
	g_atomic_int_inc (&_data1_->_ref_count_);
	return _data1_;
}


static void block1_data_unref (void * _userdata_) {
	Block1Data* _data1_;
	_data1_ = (Block1Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data1_->_ref_count_)) {
		UserListActor* self;
		self = _data1_->self;
		_g_object_unref0 (_data1_->userlist);
		_g_object_unref0 (self);
		g_slice_free (Block1Data, _data1_);
	}
}


static Block2Data* block2_data_ref (Block2Data* _data2_) {
	g_atomic_int_inc (&_data2_->_ref_count_);
	return _data2_;
}


static void block2_data_unref (void * _userdata_) {
	Block2Data* _data2_;
	_data2_ = (Block2Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data2_->_ref_count_)) {
		UserListActor* self;
		self = _data2_->_data1_->self;
		_g_object_unref0 (_data2_->user);
		block1_data_unref (_data2_->_data1_);
		_data2_->_data1_ = NULL;
		g_slice_free (Block2Data, _data2_);
	}
}


static gboolean _____lambda17_ (Block2Data* _data2_, ClutterButtonEvent* e) {
	Block1Data* _data1_;
	UserListActor* self;
	gboolean result = FALSE;
	UserList* _tmp0_ = NULL;
	LoginOption* _tmp1_ = NULL;
	_data1_ = _data2_->_data1_;
	self = _data1_->self;
	g_return_val_if_fail (e != NULL, FALSE);
	_tmp0_ = _data1_->userlist;
	_tmp1_ = _data2_->user;
	user_list_set_current_user (_tmp0_, _tmp1_);
	result = FALSE;
	return result;
}


static gboolean ______lambda17__clutter_actor_button_press_event (ClutterActor* _sender, ClutterButtonEvent* event, gpointer self) {
	gboolean result;
	result = _____lambda17_ (self, event);
	return result;
}


static void __lambda18_ (UserListActor* self, LoginOption* user) {
	LoginOption* _tmp0_ = NULL;
	g_return_if_fail (user != NULL);
	_tmp0_ = user;
	user_list_actor_animate_list (self, _tmp0_, 300);
}


static void ___lambda18__user_list_current_user_changed (UserList* _sender, LoginOption* user, gpointer self) {
	__lambda18_ ((UserListActor*) self, user);
}


UserListActor* user_list_actor_construct (GType object_type, UserList* userlist) {
	UserListActor * self = NULL;
	Block1Data* _data1_;
	UserList* _tmp0_ = NULL;
	UserList* _tmp1_ = NULL;
	UserList* _tmp2_ = NULL;
	UserList* _tmp3_ = NULL;
	UserList* _tmp20_ = NULL;
	g_return_val_if_fail (userlist != NULL, NULL);
	_data1_ = g_slice_new0 (Block1Data);
	_data1_->_ref_count_ = 1;
	_tmp0_ = userlist;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (_data1_->userlist);
	_data1_->userlist = _tmp1_;
	self = (UserListActor*) g_object_new (object_type, NULL);
	_data1_->self = g_object_ref (self);
	_tmp2_ = _data1_->userlist;
	_tmp3_ = _g_object_ref0 (_tmp2_);
	_g_object_unref0 (self->priv->userlist);
	self->priv->userlist = _tmp3_;
	{
		gint i = 0;
		i = 0;
		{
			gboolean _tmp4_ = FALSE;
			_tmp4_ = TRUE;
			while (TRUE) {
				Block2Data* _data2_;
				gint _tmp6_ = 0;
				UserList* _tmp7_ = NULL;
				gint _tmp8_ = 0;
				gint _tmp9_ = 0;
				UserList* _tmp10_ = NULL;
				gint _tmp11_ = 0;
				LoginOption* _tmp12_ = NULL;
				LoginBox* box = NULL;
				LoginOption* _tmp13_ = NULL;
				LoginBox* _tmp14_ = NULL;
				LoginBox* _tmp15_ = NULL;
				GeeHashMap* _tmp16_ = NULL;
				LoginOption* _tmp17_ = NULL;
				LoginBox* _tmp18_ = NULL;
				LoginBox* _tmp19_ = NULL;
				_data2_ = g_slice_new0 (Block2Data);
				_data2_->_ref_count_ = 1;
				_data2_->_data1_ = block1_data_ref (_data1_);
				if (!_tmp4_) {
					gint _tmp5_ = 0;
					_tmp5_ = i;
					i = _tmp5_ + 1;
				}
				_tmp4_ = FALSE;
				_tmp6_ = i;
				_tmp7_ = _data1_->userlist;
				_tmp8_ = user_list_get_size (_tmp7_);
				_tmp9_ = _tmp8_;
				if (!(_tmp6_ < _tmp9_)) {
					block2_data_unref (_data2_);
					_data2_ = NULL;
					break;
				}
				_tmp10_ = _data1_->userlist;
				_tmp11_ = i;
				_tmp12_ = user_list_get_user (_tmp10_, _tmp11_);
				_data2_->user = _tmp12_;
				_tmp13_ = _data2_->user;
				_tmp14_ = login_box_new (_tmp13_);
				g_object_ref_sink (_tmp14_);
				box = _tmp14_;
				_tmp15_ = box;
				g_signal_connect_data ((ClutterActor*) _tmp15_, "button-press-event", (GCallback) ______lambda17__clutter_actor_button_press_event, block2_data_ref (_data2_), (GClosureNotify) block2_data_unref, 0);
				_tmp16_ = self->priv->boxes;
				_tmp17_ = _data2_->user;
				_tmp18_ = box;
				gee_abstract_map_set ((GeeAbstractMap*) _tmp16_, _tmp17_, _tmp18_);
				_tmp19_ = box;
				clutter_actor_add_child ((ClutterActor*) self, (ClutterActor*) _tmp19_);
				_g_object_unref0 (box);
				block2_data_unref (_data2_);
				_data2_ = NULL;
			}
		}
	}
	_tmp20_ = _data1_->userlist;
	g_signal_connect_object (_tmp20_, "current-user-changed", (GCallback) ___lambda18__user_list_current_user_changed, self, 0);
	block1_data_unref (_data1_);
	_data1_ = NULL;
	return self;
}


UserListActor* user_list_actor_new (UserList* userlist) {
	return user_list_actor_construct (TYPE_USER_LIST_ACTOR, userlist);
}


static gfloat* user_list_actor_get_y_for_users (UserListActor* self, LoginOption* current_user, int* result_length1) {
	gfloat* result = NULL;
	gfloat* _result_ = NULL;
	UserList* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	gint _tmp2_ = 0;
	gfloat* _tmp3_ = NULL;
	gint _result__length1 = 0;
	gint __result__size_ = 0;
	gfloat run_y = 0.0F;
	gfloat current_user_y = 0.0F;
	gfloat* _tmp44_ = NULL;
	gint _tmp44__length1 = 0;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (current_user != NULL, NULL);
	_tmp0_ = self->priv->userlist;
	_tmp1_ = user_list_get_size (_tmp0_);
	_tmp2_ = _tmp1_;
	_tmp3_ = g_new0 (gfloat, _tmp2_);
	_result_ = _tmp3_;
	_result__length1 = _tmp2_;
	__result__size_ = _result__length1;
	run_y = (gfloat) 0;
	current_user_y = (gfloat) 0;
	{
		gint i = 0;
		i = 0;
		{
			gboolean _tmp4_ = FALSE;
			_tmp4_ = TRUE;
			while (TRUE) {
				gint _tmp6_ = 0;
				UserList* _tmp7_ = NULL;
				gint _tmp8_ = 0;
				gint _tmp9_ = 0;
				LoginOption* user = NULL;
				UserList* _tmp10_ = NULL;
				gint _tmp11_ = 0;
				LoginOption* _tmp12_ = NULL;
				gfloat* _tmp13_ = NULL;
				gint _tmp13__length1 = 0;
				gint _tmp14_ = 0;
				gfloat _tmp15_ = 0.0F;
				gfloat _tmp16_ = 0.0F;
				gfloat _tmp17_ = 0.0F;
				gboolean _tmp18_ = FALSE;
				LoginOption* _tmp19_ = NULL;
				LoginOption* _tmp20_ = NULL;
				LoginOption* _tmp27_ = NULL;
				LoginOption* _tmp28_ = NULL;
				if (!_tmp4_) {
					gint _tmp5_ = 0;
					_tmp5_ = i;
					i = _tmp5_ + 1;
				}
				_tmp4_ = FALSE;
				_tmp6_ = i;
				_tmp7_ = self->priv->userlist;
				_tmp8_ = user_list_get_size (_tmp7_);
				_tmp9_ = _tmp8_;
				if (!(_tmp6_ < _tmp9_)) {
					break;
				}
				_tmp10_ = self->priv->userlist;
				_tmp11_ = i;
				_tmp12_ = user_list_get_user (_tmp10_, _tmp11_);
				user = _tmp12_;
				_tmp13_ = _result_;
				_tmp13__length1 = _result__length1;
				_tmp14_ = i;
				_tmp15_ = run_y;
				_tmp13_[_tmp14_] = _tmp15_;
				_tmp16_ = _tmp13_[_tmp14_];
				_tmp17_ = run_y;
				run_y = _tmp17_ + 100;
				_tmp19_ = user;
				_tmp20_ = current_user;
				if (_tmp19_ != _tmp20_) {
					UserList* _tmp21_ = NULL;
					LoginOption* _tmp22_ = NULL;
					LoginOption* _tmp23_ = NULL;
					LoginOption* _tmp24_ = NULL;
					LoginOption* _tmp25_ = NULL;
					_tmp21_ = self->priv->userlist;
					_tmp22_ = user;
					_tmp23_ = user_list_get_next (_tmp21_, _tmp22_);
					_tmp24_ = _tmp23_;
					_tmp25_ = current_user;
					_tmp18_ = _tmp24_ == _tmp25_;
					_g_object_unref0 (_tmp24_);
				} else {
					_tmp18_ = FALSE;
				}
				if (_tmp18_) {
					gfloat _tmp26_ = 0.0F;
					_tmp26_ = run_y;
					run_y = _tmp26_ + 100;
				}
				_tmp27_ = user;
				_tmp28_ = current_user;
				if (_tmp27_ == _tmp28_) {
					gfloat _tmp29_ = 0.0F;
					gfloat _tmp30_ = 0.0F;
					_tmp29_ = run_y;
					current_user_y = _tmp29_;
					_tmp30_ = run_y;
					run_y = _tmp30_ + 100;
				}
				_g_object_unref0 (user);
			}
		}
	}
	{
		gint i = 0;
		i = 0;
		{
			gboolean _tmp31_ = FALSE;
			_tmp31_ = TRUE;
			while (TRUE) {
				gint _tmp33_ = 0;
				UserList* _tmp34_ = NULL;
				gint _tmp35_ = 0;
				gint _tmp36_ = 0;
				gfloat* _tmp37_ = NULL;
				gint _tmp37__length1 = 0;
				gint _tmp38_ = 0;
				gfloat* _tmp39_ = NULL;
				gint _tmp39__length1 = 0;
				gint _tmp40_ = 0;
				gfloat _tmp41_ = 0.0F;
				gfloat _tmp42_ = 0.0F;
				gfloat _tmp43_ = 0.0F;
				if (!_tmp31_) {
					gint _tmp32_ = 0;
					_tmp32_ = i;
					i = _tmp32_ + 1;
				}
				_tmp31_ = FALSE;
				_tmp33_ = i;
				_tmp34_ = self->priv->userlist;
				_tmp35_ = user_list_get_size (_tmp34_);
				_tmp36_ = _tmp35_;
				if (!(_tmp33_ < _tmp36_)) {
					break;
				}
				_tmp37_ = _result_;
				_tmp37__length1 = _result__length1;
				_tmp38_ = i;
				_tmp39_ = _result_;
				_tmp39__length1 = _result__length1;
				_tmp40_ = i;
				_tmp41_ = _tmp39_[_tmp40_];
				_tmp42_ = current_user_y;
				_tmp37_[_tmp38_] = _tmp41_ - _tmp42_;
				_tmp43_ = _tmp37_[_tmp38_];
			}
		}
	}
	_tmp44_ = _result_;
	_tmp44__length1 = _result__length1;
	if (result_length1) {
		*result_length1 = _tmp44__length1;
	}
	result = _tmp44_;
	return result;
}


LoginBox* user_list_actor_get_current_loginbox (UserListActor* self) {
	LoginBox* result = NULL;
	LoginOption* user = NULL;
	UserList* _tmp0_ = NULL;
	LoginOption* _tmp1_ = NULL;
	LoginOption* _tmp2_ = NULL;
	LoginOption* _tmp3_ = NULL;
	GeeHashMap* _tmp4_ = NULL;
	gpointer _tmp5_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->userlist;
	_tmp1_ = user_list_get_current_user (_tmp0_);
	_tmp2_ = _tmp1_;
	_tmp3_ = _g_object_ref0 (_tmp2_);
	user = _tmp3_;
	_tmp4_ = self->priv->boxes;
	_tmp5_ = gee_abstract_map_get ((GeeAbstractMap*) _tmp4_, user);
	result = (LoginBox*) _tmp5_;
	_g_object_unref0 (user);
	return result;
}


ClutterBoxLayout* user_list_actor_get_grid_layout (UserListActor* self) {
	ClutterBoxLayout* result = NULL;
	ClutterBoxLayout* _tmp0_ = NULL;
	ClutterBoxLayout* _tmp1_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->grid;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	result = _tmp1_;
	return result;
}


static Block3Data* block3_data_ref (Block3Data* _data3_) {
	g_atomic_int_inc (&_data3_->_ref_count_);
	return _data3_;
}


static void block3_data_unref (void * _userdata_) {
	Block3Data* _data3_;
	_data3_ = (Block3Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data3_->_ref_count_)) {
		UserListActor* self;
		self = _data3_->self;
		_g_object_unref0 (_data3_->box);
		_g_object_unref0 (self);
		g_slice_free (Block3Data, _data3_);
	}
}


static gboolean ______lambda19_ (Block3Data* _data3_) {
	UserListActor* self;
	gboolean result = FALSE;
	LoginBox* _tmp0_ = NULL;
	self = _data3_->self;
	_tmp0_ = _data3_->box;
	login_box_pass_focus (_tmp0_);
	result = FALSE;
	return result;
}


static gboolean _______lambda19__gsource_func (gpointer self) {
	gboolean result;
	result = ______lambda19_ (self);
	return result;
}


static void user_list_actor_animate_list (UserListActor* self, LoginOption* current_user, gint duration) {
	gfloat* y_vars = NULL;
	LoginOption* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	gfloat* _tmp2_ = NULL;
	gint y_vars_length1 = 0;
	gint _y_vars_size_ = 0;
	g_return_if_fail (self != NULL);
	g_return_if_fail (current_user != NULL);
	_tmp0_ = current_user;
	_tmp2_ = user_list_actor_get_y_for_users (self, _tmp0_, &_tmp1_);
	y_vars = _tmp2_;
	y_vars_length1 = _tmp1_;
	_y_vars_size_ = y_vars_length1;
	{
		gint i = 0;
		i = 0;
		{
			gboolean _tmp3_ = FALSE;
			_tmp3_ = TRUE;
			while (TRUE) {
				Block3Data* _data3_;
				gint _tmp5_ = 0;
				UserList* _tmp6_ = NULL;
				gint _tmp7_ = 0;
				gint _tmp8_ = 0;
				LoginOption* user = NULL;
				UserList* _tmp9_ = NULL;
				gint _tmp10_ = 0;
				LoginOption* _tmp11_ = NULL;
				GeeHashMap* _tmp12_ = NULL;
				LoginOption* _tmp13_ = NULL;
				gpointer _tmp14_ = NULL;
				LoginBox* _tmp15_ = NULL;
				LoginBox* _tmp16_ = NULL;
				LoginBox* _tmp17_ = NULL;
				gint _tmp18_ = 0;
				LoginBox* _tmp19_ = NULL;
				gfloat* _tmp20_ = NULL;
				gint _tmp20__length1 = 0;
				gint _tmp21_ = 0;
				gfloat _tmp22_ = 0.0F;
				LoginBox* _tmp23_ = NULL;
				LoginBox* _tmp24_ = NULL;
				LoginOption* _tmp25_ = NULL;
				LoginOption* _tmp26_ = NULL;
				LoginOption* _tmp27_ = NULL;
				LoginOption* _tmp28_ = NULL;
				_data3_ = g_slice_new0 (Block3Data);
				_data3_->_ref_count_ = 1;
				_data3_->self = g_object_ref (self);
				if (!_tmp3_) {
					gint _tmp4_ = 0;
					_tmp4_ = i;
					i = _tmp4_ + 1;
				}
				_tmp3_ = FALSE;
				_tmp5_ = i;
				_tmp6_ = self->priv->userlist;
				_tmp7_ = user_list_get_size (_tmp6_);
				_tmp8_ = _tmp7_;
				if (!(_tmp5_ < _tmp8_)) {
					block3_data_unref (_data3_);
					_data3_ = NULL;
					break;
				}
				_tmp9_ = self->priv->userlist;
				_tmp10_ = i;
				_tmp11_ = user_list_get_user (_tmp9_, _tmp10_);
				user = _tmp11_;
				_tmp12_ = self->priv->boxes;
				_tmp13_ = user;
				_tmp14_ = gee_abstract_map_get ((GeeAbstractMap*) _tmp12_, _tmp13_);
				_data3_->box = (LoginBox*) _tmp14_;
				_tmp15_ = _data3_->box;
				clutter_actor_save_easing_state ((ClutterActor*) _tmp15_);
				_tmp16_ = _data3_->box;
				clutter_actor_set_easing_mode ((ClutterActor*) _tmp16_, CLUTTER_EASE_IN_OUT_QUAD);
				_tmp17_ = _data3_->box;
				_tmp18_ = duration;
				clutter_actor_set_easing_duration ((ClutterActor*) _tmp17_, (guint) _tmp18_);
				_tmp19_ = _data3_->box;
				_tmp20_ = y_vars;
				_tmp20__length1 = y_vars_length1;
				_tmp21_ = i;
				_tmp22_ = _tmp20_[_tmp21_];
				clutter_actor_set_x ((ClutterActor*) _tmp19_, _tmp22_);
				_tmp23_ = _data3_->box;
				clutter_actor_restore_easing_state ((ClutterActor*) _tmp23_);
				_tmp24_ = _data3_->box;
				_tmp25_ = user;
				_tmp26_ = current_user;
				login_box_set_selected (_tmp24_, _tmp25_ == _tmp26_);
				_tmp27_ = user;
				_tmp28_ = current_user;
				if (_tmp27_ == _tmp28_) {
					gint _tmp29_ = 0;
					_tmp29_ = duration;
					g_timeout_add_full (G_PRIORITY_DEFAULT, (guint) _tmp29_, _______lambda19__gsource_func, block3_data_ref (_data3_), block3_data_unref);
				}
				_g_object_unref0 (user);
				block3_data_unref (_data3_);
				_data3_ = NULL;
			}
		}
	}
	y_vars = (g_free (y_vars), NULL);
}


static void user_list_actor_class_init (UserListActorClass * klass) {
	user_list_actor_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (UserListActorPrivate));
	G_OBJECT_CLASS (klass)->finalize = user_list_actor_finalize;
}


static void user_list_actor_instance_init (UserListActor * self) {
	GeeHashMap* _tmp0_ = NULL;
	self->priv = USER_LIST_ACTOR_GET_PRIVATE (self);
	_tmp0_ = gee_hash_map_new (TYPE_LOGIN_OPTION, (GBoxedCopyFunc) g_object_ref, g_object_unref, TYPE_LOGIN_BOX, (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
	self->priv->boxes = _tmp0_;
}


static void user_list_actor_finalize (GObject* obj) {
	UserListActor * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_USER_LIST_ACTOR, UserListActor);
	_g_object_unref0 (self->priv->userlist);
	_g_object_unref0 (self->priv->grid);
	_g_object_unref0 (self->priv->boxes);
	G_OBJECT_CLASS (user_list_actor_parent_class)->finalize (obj);
}


/***
    BEGIN LICENSE

    Copyright (C) 2011-2014 elementary Developers

    This program is free software: you can redistribute it and/or modify it
    under the terms of the GNU Lesser General Public License version 3, as published
    by the Free Software Foundation.

    This program is distributed in the hope that it will be useful, but
    WITHOUT ANY WARRANTY; without even the implied warranties of
    MERCHANTABILITY, SATISFACTORY QUALITY, or FITNESS FOR A PARTICULAR
    PURPOSE.  See the GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program.  If not, see <http://www.gnu.org/licenses/>

    END LICENSE
***/
GType user_list_actor_get_type (void) {
	static volatile gsize user_list_actor_type_id__volatile = 0;
	if (g_once_init_enter (&user_list_actor_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (UserListActorClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) user_list_actor_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (UserListActor), 0, (GInstanceInitFunc) user_list_actor_instance_init, NULL };
		GType user_list_actor_type_id;
		user_list_actor_type_id = g_type_register_static (clutter_actor_get_type (), "UserListActor", &g_define_type_info, 0);
		g_once_init_leave (&user_list_actor_type_id__volatile, user_list_actor_type_id);
	}
	return user_list_actor_type_id__volatile;
}


