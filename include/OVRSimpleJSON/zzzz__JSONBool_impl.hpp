#pragma once
// IWYU pragma private; include "OVRSimpleJSON/JSONBool.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_impl.hpp"
#include "OVRSimpleJSON/zzzz__JSONBool_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONNodeType_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONTextMode_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OVRSimpleJSON::JSONBool.get_Tag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNodeType (::OVRSimpleJSON::JSONBool::*)()>(&::OVRSimpleJSON::JSONBool::get_Tag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e28364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONBool*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONBool*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONBool.get_IsBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVRSimpleJSON::JSONBool::*)()>(&::OVRSimpleJSON::JSONBool::get_IsBoolean)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2836c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONBool*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONBool*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONBool.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode_Enumerator (::OVRSimpleJSON::JSONBool::*)()>(&::OVRSimpleJSON::JSONBool::GetEnumerator)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e28374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONBool*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONBool*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONBool.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OVRSimpleJSON::JSONBool::*)()>(&::OVRSimpleJSON::JSONBool::get_Value)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e28388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONBool*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONBool*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONBool.set_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONBool::*)(::StringW)>(&::OVRSimpleJSON::JSONBool::set_Value)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5e283b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONBool*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONBool*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONBool.get_AsBool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVRSimpleJSON::JSONBool::*)()>(&::OVRSimpleJSON::JSONBool::get_AsBool)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e28408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONBool*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONBool*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONBool.set_AsBool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONBool::*)(bool)>(&::OVRSimpleJSON::JSONBool::set_AsBool)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e28410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONBool*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONBool*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONBool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONBool::*)(bool)>(&::OVRSimpleJSON::JSONBool::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e28418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONBool*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONBool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONBool::*)(::StringW)>(&::OVRSimpleJSON::JSONBool::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e28480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONBool*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONBool.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONBool::*)()>(&::OVRSimpleJSON::JSONBool::Clone)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e284f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONBool*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONBool*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONBool.WriteToStringBuilder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONBool::*)(::System::Text::StringBuilder*, int32_t, int32_t, ::OVRSimpleJSON::JSONTextMode)>(
    &::OVRSimpleJSON::JSONBool::WriteToStringBuilder)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5e28550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONBool*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONBool*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONBool.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVRSimpleJSON::JSONBool::*)(::System::Object*)>(&::OVRSimpleJSON::JSONBool::Equals)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5e285e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONBool*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONBool*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONBool.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::OVRSimpleJSON::JSONBool::*)()>(&::OVRSimpleJSON::JSONBool::GetHashCode)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5e28614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONBool*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONBool*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONBool.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONBool::*)()>(&::OVRSimpleJSON::JSONBool::Clear)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e28648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONBool*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONBool*>(), 25 }));
    return ___internal_method;
  }
};
constexpr bool& OVRSimpleJSON::JSONBool::__cordl_internal_get_m_Data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Data;
}
constexpr bool const& OVRSimpleJSON::JSONBool::__cordl_internal_get_m_Data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Data;
}
constexpr void OVRSimpleJSON::JSONBool::__cordl_internal_set_m_Data(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Data = value;
}
inline ::OVRSimpleJSON::JSONNodeType OVRSimpleJSON::JSONBool::get_Tag() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONBool*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNodeType>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONBool::get_IsBoolean() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONBool*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode_Enumerator OVRSimpleJSON::JSONBool::GetEnumerator() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONBool*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode_Enumerator>(this, ___internal_method);
}
inline ::StringW OVRSimpleJSON::JSONBool::get_Value() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONBool*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONBool::set_Value(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONBool*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool OVRSimpleJSON::JSONBool::get_AsBool() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONBool*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONBool::set_AsBool(bool value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONBool*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void OVRSimpleJSON::JSONBool::_ctor(bool aData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONBool*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aData);
}
inline void OVRSimpleJSON::JSONBool::_ctor(::StringW aData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONBool*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aData);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONBool::Clone() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONBool*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONBool::WriteToStringBuilder(::System::Text::StringBuilder* aSB, int32_t aIndent, int32_t aIndentInc, ::OVRSimpleJSON::JSONTextMode aMode) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONBool*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aSB, aIndent, aIndentInc, aMode);
}
inline bool OVRSimpleJSON::JSONBool::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONBool*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t OVRSimpleJSON::JSONBool::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONBool*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONBool::Clear() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONBool*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONBool* OVRSimpleJSON::JSONBool::New_ctor(bool aData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVRSimpleJSON::JSONBool*>(aData));
}
inline ::OVRSimpleJSON::JSONBool* OVRSimpleJSON::JSONBool::New_ctor(::StringW aData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVRSimpleJSON::JSONBool*>(aData));
}
// Ctor Parameters []
constexpr ::OVRSimpleJSON::JSONBool::JSONBool() {}
