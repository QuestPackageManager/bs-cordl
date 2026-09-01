#pragma once
// IWYU pragma private; include "OVRSimpleJSON\JSONNumber.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_impl.hpp"
#include "OVRSimpleJSON/zzzz__JSONNumber_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONNodeType_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONTextMode_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OVRSimpleJSON::JSONNumber.get_Tag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNodeType (::OVRSimpleJSON::JSONNumber::*)()>(&::OVRSimpleJSON::JSONNumber::get_Tag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e29fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNumber.get_IsNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVRSimpleJSON::JSONNumber::*)()>(&::OVRSimpleJSON::JSONNumber::get_IsNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e29fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNumber.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode_Enumerator (::OVRSimpleJSON::JSONNumber::*)()>(&::OVRSimpleJSON::JSONNumber::GetEnumerator)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e29ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNumber.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OVRSimpleJSON::JSONNumber::*)()>(&::OVRSimpleJSON::JSONNumber::get_Value)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e2a008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNumber.set_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNumber::*)(::StringW)>(&::OVRSimpleJSON::JSONNumber::set_Value)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5e2a070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNumber.get_AsDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::OVRSimpleJSON::JSONNumber::*)()>(&::OVRSimpleJSON::JSONNumber::get_AsDouble)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2a100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNumber.set_AsDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNumber::*)(double_t)>(&::OVRSimpleJSON::JSONNumber::set_AsDouble)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2a108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNumber.get_AsLong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::OVRSimpleJSON::JSONNumber::*)()>(&::OVRSimpleJSON::JSONNumber::get_AsLong)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e2a110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNumber.set_AsLong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNumber::*)(int64_t)>(&::OVRSimpleJSON::JSONNumber::set_AsLong)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e2a130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNumber.get_AsULong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::OVRSimpleJSON::JSONNumber::*)()>(&::OVRSimpleJSON::JSONNumber::get_AsULong)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e2a13c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNumber.set_AsULong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNumber::*)(uint64_t)>(&::OVRSimpleJSON::JSONNumber::set_AsULong)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e2a154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNumber._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNumber::*)(double_t)>(&::OVRSimpleJSON::JSONNumber::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5e2a160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), { ".ctor", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNumber._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNumber::*)(::StringW)>(&::OVRSimpleJSON::JSONNumber::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e2a1c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNumber.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNumber::*)()>(&::OVRSimpleJSON::JSONNumber::Clone)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e2a234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNumber.WriteToStringBuilder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNumber::*)(::System::Text::StringBuilder*, int32_t, int32_t, ::OVRSimpleJSON::JSONTextMode)>(
    &::OVRSimpleJSON::JSONNumber::WriteToStringBuilder)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e2a29c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNumber.IsNumeric
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*)>(&::OVRSimpleJSON::JSONNumber::IsNumeric)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5e2a334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), { "IsNumeric", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNumber.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVRSimpleJSON::JSONNumber::*)(::System::Object*)>(&::OVRSimpleJSON::JSONNumber::Equals)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5e2a428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNumber.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::OVRSimpleJSON::JSONNumber::*)()>(&::OVRSimpleJSON::JSONNumber::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e2a564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNumber.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNumber::*)()>(&::OVRSimpleJSON::JSONNumber::Clear)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2a584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), 25 }));
    return ___internal_method;
  }
};
constexpr double_t& OVRSimpleJSON::JSONNumber::__cordl_internal_get_m_Data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Data;
}
constexpr double_t const& OVRSimpleJSON::JSONNumber::__cordl_internal_get_m_Data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Data;
}
constexpr void OVRSimpleJSON::JSONNumber::__cordl_internal_set_m_Data(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Data = value;
}
inline ::OVRSimpleJSON::JSONNodeType OVRSimpleJSON::JSONNumber::get_Tag() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNodeType>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONNumber::get_IsNumber() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode_Enumerator OVRSimpleJSON::JSONNumber::GetEnumerator() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode_Enumerator>(this, ___internal_method);
}
inline ::StringW OVRSimpleJSON::JSONNumber::get_Value() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNumber::set_Value(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t OVRSimpleJSON::JSONNumber::get_AsDouble() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNumber::set_AsDouble(double_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t OVRSimpleJSON::JSONNumber::get_AsLong() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNumber::set_AsLong(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint64_t OVRSimpleJSON::JSONNumber::get_AsULong() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNumber::set_AsULong(uint64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void OVRSimpleJSON::JSONNumber::_ctor(double_t aData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), { ".ctor", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aData);
}
inline void OVRSimpleJSON::JSONNumber::_ctor(::StringW aData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aData);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNumber::Clone() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNumber::WriteToStringBuilder(::System::Text::StringBuilder* aSB, int32_t aIndent, int32_t aIndentInc, ::OVRSimpleJSON::JSONTextMode aMode) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aSB, aIndent, aIndentInc, aMode);
}
inline bool OVRSimpleJSON::JSONNumber::IsNumeric(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), { "IsNumeric", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool OVRSimpleJSON::JSONNumber::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t OVRSimpleJSON::JSONNumber::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNumber::Clear() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNumber*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNumber* OVRSimpleJSON::JSONNumber::New_ctor(double_t aData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVRSimpleJSON::JSONNumber*>(aData));
}
inline ::OVRSimpleJSON::JSONNumber* OVRSimpleJSON::JSONNumber::New_ctor(::StringW aData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVRSimpleJSON::JSONNumber*>(aData));
}
// Ctor Parameters []
constexpr ::OVRSimpleJSON::JSONNumber::JSONNumber() {}
