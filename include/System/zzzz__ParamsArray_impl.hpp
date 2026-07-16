#pragma once
// IWYU pragma private; include "System/ParamsArray.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ParamsArray_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ParamsArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ParamsArray::*)(::System::Object*)>(&::System::ParamsArray::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5c55a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ParamsArray>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ParamsArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ParamsArray::*)(::System::Object*, ::System::Object*)>(&::System::ParamsArray::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5c55af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ParamsArray>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ParamsArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ParamsArray::*)(::System::Object*, ::System::Object*, ::System::Object*)>(&::System::ParamsArray::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c55b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ParamsArray>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ParamsArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ParamsArray::*)(::ArrayW<::System::Object*>)>(&::System::ParamsArray::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c55bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ParamsArray>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ParamsArray.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ParamsArray::*)()>(&::System::ParamsArray::get_Length)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c55c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ParamsArray>(), { "get_Length", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ParamsArray.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ParamsArray::*)(int32_t)>(&::System::ParamsArray::get_Item)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c55c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ParamsArray>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ParamsArray.GetAtSlow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ParamsArray::*)(int32_t)>(&::System::ParamsArray::GetAtSlow)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5c55cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ParamsArray>(), { "GetAtSlow", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void System::ParamsArray::setStaticF_s_oneArgArray(::ArrayW<::System::Object*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Object*>, "s_oneArgArray", ::System::ParamsArray>(std::forward<::ArrayW<::System::Object*>>(value));
}
inline ::ArrayW<::System::Object*> System::ParamsArray::getStaticF_s_oneArgArray() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Object*>, "s_oneArgArray", ::System::ParamsArray>();
}
inline void System::ParamsArray::setStaticF_s_twoArgArray(::ArrayW<::System::Object*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Object*>, "s_twoArgArray", ::System::ParamsArray>(std::forward<::ArrayW<::System::Object*>>(value));
}
inline ::ArrayW<::System::Object*> System::ParamsArray::getStaticF_s_twoArgArray() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Object*>, "s_twoArgArray", ::System::ParamsArray>();
}
inline void System::ParamsArray::setStaticF_s_threeArgArray(::ArrayW<::System::Object*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Object*>, "s_threeArgArray", ::System::ParamsArray>(std::forward<::ArrayW<::System::Object*>>(value));
}
inline ::ArrayW<::System::Object*> System::ParamsArray::getStaticF_s_threeArgArray() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Object*>, "s_threeArgArray", ::System::ParamsArray>();
}
inline void System::ParamsArray::_ctor(::System::Object* arg0) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ParamsArray>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, arg0);
}
inline void System::ParamsArray::_ctor(::System::Object* arg0, ::System::Object* arg1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ParamsArray>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, arg0, arg1);
}
inline void System::ParamsArray::_ctor(::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ParamsArray>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, arg0, arg1, arg2);
}
inline void System::ParamsArray::_ctor(::ArrayW<::System::Object*> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ParamsArray>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, args);
}
inline int32_t System::ParamsArray::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ParamsArray>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::System::Object* System::ParamsArray::get_Item(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ParamsArray>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method, index);
}
inline ::System::Object* System::ParamsArray::GetAtSlow(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ParamsArray>(), { "GetAtSlow", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method, index);
}
// Ctor Parameters [CppParam { name: "_arg0", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_arg1", ty: "::System::Object*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "_arg2", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_args", ty: "::ArrayW<::System::Object*>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ParamsArray::ParamsArray(::System::Object* _arg0, ::System::Object* _arg1, ::System::Object* _arg2, ::ArrayW<::System::Object*> _args) noexcept {
  this->_arg0 = _arg0;
  this->_arg1 = _arg1;
  this->_arg2 = _arg2;
  this->_args = _args;
}
// Ctor Parameters []
constexpr ::System::ParamsArray::ParamsArray() {}
