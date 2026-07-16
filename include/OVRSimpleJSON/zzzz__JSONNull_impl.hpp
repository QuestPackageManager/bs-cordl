#pragma once
// IWYU pragma private; include "OVRSimpleJSON/JSONNull.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_impl.hpp"
#include "OVRSimpleJSON/zzzz__JSONNull_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONNodeType_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONTextMode_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OVRSimpleJSON::JSONNull.CreateOrGet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNull* (*)()>(&::OVRSimpleJSON::JSONNull::CreateOrGet)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5e25600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNull*>(), { "CreateOrGet", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNull._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNull::*)()>(&::OVRSimpleJSON::JSONNull::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e28650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNull*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNull.get_Tag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNodeType (::OVRSimpleJSON::JSONNull::*)()>(&::OVRSimpleJSON::JSONNull::get_Tag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e286a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNull*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNull*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNull.get_IsNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVRSimpleJSON::JSONNull::*)()>(&::OVRSimpleJSON::JSONNull::get_IsNull)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e286b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNull*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNull*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNull.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode_Enumerator (::OVRSimpleJSON::JSONNull::*)()>(&::OVRSimpleJSON::JSONNull::GetEnumerator)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e286b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNull*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNull*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNull.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OVRSimpleJSON::JSONNull::*)()>(&::OVRSimpleJSON::JSONNull::get_Value)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5e286cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNull*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNull*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNull.set_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNull::*)(::StringW)>(&::OVRSimpleJSON::JSONNull::set_Value)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e28710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNull*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNull*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNull.get_AsBool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVRSimpleJSON::JSONNull::*)()>(&::OVRSimpleJSON::JSONNull::get_AsBool)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e28714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNull*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNull*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNull.set_AsBool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNull::*)(bool)>(&::OVRSimpleJSON::JSONNull::set_AsBool)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e2871c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNull*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNull*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNull.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNull::*)()>(&::OVRSimpleJSON::JSONNull::Clone)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5e28720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNull*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNull*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNull.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVRSimpleJSON::JSONNull::*)(::System::Object*)>(&::OVRSimpleJSON::JSONNull::Equals)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e28770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNull*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNull*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNull.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::OVRSimpleJSON::JSONNull::*)()>(&::OVRSimpleJSON::JSONNull::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e28808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNull*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNull*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNull.WriteToStringBuilder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNull::*)(::System::Text::StringBuilder*, int32_t, int32_t, ::OVRSimpleJSON::JSONTextMode)>(
    &::OVRSimpleJSON::JSONNull::WriteToStringBuilder)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e28810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNull*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNull*>(), 31 }));
    return ___internal_method;
  }
};
inline void OVRSimpleJSON::JSONNull::setStaticF_m_StaticInstance(::OVRSimpleJSON::JSONNull* value) {
  ::cordl_internals::setStaticField<::OVRSimpleJSON::JSONNull*, "m_StaticInstance", ::OVRSimpleJSON::JSONNull*>(std::forward<::OVRSimpleJSON::JSONNull*>(value));
}
inline ::OVRSimpleJSON::JSONNull* OVRSimpleJSON::JSONNull::getStaticF_m_StaticInstance() {
  return ::cordl_internals::getStaticField<::OVRSimpleJSON::JSONNull*, "m_StaticInstance", ::OVRSimpleJSON::JSONNull*>();
}
inline void OVRSimpleJSON::JSONNull::setStaticF_reuseSameInstance(bool value) {
  ::cordl_internals::setStaticField<bool, "reuseSameInstance", ::OVRSimpleJSON::JSONNull*>(std::forward<bool>(value));
}
inline bool OVRSimpleJSON::JSONNull::getStaticF_reuseSameInstance() {
  return ::cordl_internals::getStaticField<bool, "reuseSameInstance", ::OVRSimpleJSON::JSONNull*>();
}
inline ::OVRSimpleJSON::JSONNull* OVRSimpleJSON::JSONNull::CreateOrGet() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNull*>(), { "CreateOrGet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNull*>(nullptr, ___internal_method);
}
inline void OVRSimpleJSON::JSONNull::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNull*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNodeType OVRSimpleJSON::JSONNull::get_Tag() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNull*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNodeType>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONNull::get_IsNull() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNull*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode_Enumerator OVRSimpleJSON::JSONNull::GetEnumerator() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNull*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode_Enumerator>(this, ___internal_method);
}
inline ::StringW OVRSimpleJSON::JSONNull::get_Value() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNull*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNull::set_Value(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNull*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool OVRSimpleJSON::JSONNull::get_AsBool() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNull*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNull::set_AsBool(bool value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNull*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNull::Clone() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNull*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONNull::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNull*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t OVRSimpleJSON::JSONNull::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNull*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNull::WriteToStringBuilder(::System::Text::StringBuilder* aSB, int32_t aIndent, int32_t aIndentInc, ::OVRSimpleJSON::JSONTextMode aMode) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNull*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aSB, aIndent, aIndentInc, aMode);
}
inline ::OVRSimpleJSON::JSONNull* OVRSimpleJSON::JSONNull::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVRSimpleJSON::JSONNull*>());
}
// Ctor Parameters []
constexpr ::OVRSimpleJSON::JSONNull::JSONNull() {}
