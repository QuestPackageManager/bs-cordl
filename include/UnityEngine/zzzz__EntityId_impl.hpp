#pragma once
// IWYU pragma private; include "UnityEngine/EntityId.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::EntityId.get_None
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EntityId (*)()>(&::UnityEngine::EntityId::get_None)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f429f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EntityId>(), { "get_None", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EntityId.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EntityId::*)(::System::Object*)>(&::UnityEngine::EntityId::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6f429fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EntityId>(), { ::i2c::class_of<::UnityEngine::EntityId>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EntityId.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EntityId::*)(::UnityEngine::EntityId)>(&::UnityEngine::EntityId::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6f42a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EntityId>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::EntityId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EntityId.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::EntityId::*)(::UnityEngine::EntityId)>(&::UnityEngine::EntityId::CompareTo)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6f42a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EntityId>(), { "CompareTo", {}, { ::i2c::type_of<::UnityEngine::EntityId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EntityId.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::EntityId, ::UnityEngine::EntityId)>(&::UnityEngine::EntityId::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6f42a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::EntityId>(), { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::UnityEngine::EntityId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EntityId.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::EntityId, ::UnityEngine::EntityId)>(&::UnityEngine::EntityId::op_Inequality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6f42aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::EntityId>(), { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::UnityEngine::EntityId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EntityId.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::EntityId, ::UnityEngine::EntityId)>(&::UnityEngine::EntityId::op_LessThan)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6f42ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::EntityId>(), { "op_LessThan", {}, { ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::UnityEngine::EntityId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EntityId.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::EntityId, ::UnityEngine::EntityId)>(&::UnityEngine::EntityId::op_GreaterThan)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6f42ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::EntityId>(), { "op_GreaterThan", {}, { ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::UnityEngine::EntityId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EntityId.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::EntityId, ::UnityEngine::EntityId)>(&::UnityEngine::EntityId::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6f42acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::EntityId>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::UnityEngine::EntityId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EntityId.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::EntityId, ::UnityEngine::EntityId)>(&::UnityEngine::EntityId::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6f42ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::EntityId>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::UnityEngine::EntityId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EntityId.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::EntityId::*)()>(&::UnityEngine::EntityId::GetHashCode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6f42ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EntityId>(), { ::i2c::class_of<::UnityEngine::EntityId>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EntityId.op_Implicit_int32_t
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::EntityId)>(&::UnityEngine::EntityId::op_Implicit_int32_t)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f42b4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EntityId>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::EntityId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EntityId.op_Implicit___UnityEngine__EntityId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EntityId (*)(int32_t)>(&::UnityEngine::EntityId::op_Implicit___UnityEngine__EntityId)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f3e178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EntityId>(), { "op_Implicit", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EntityId.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::EntityId::*)()>(&::UnityEngine::EntityId::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f42b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EntityId>(), { ::i2c::class_of<::UnityEngine::EntityId>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EntityId.From
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EntityId (*)(int32_t)>(&::UnityEngine::EntityId::From)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6f42b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EntityId>(), { "From", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::EntityId UnityEngine::EntityId::get_None() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EntityId>(), { "get_None", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EntityId>(nullptr, ___internal_method);
}
inline bool UnityEngine::EntityId::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EntityId>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool UnityEngine::EntityId::Equals(::UnityEngine::EntityId other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EntityId>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::EntityId>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t UnityEngine::EntityId::CompareTo(::UnityEngine::EntityId other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EntityId>(), { "CompareTo", {}, { ::i2c::type_of<::UnityEngine::EntityId>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool UnityEngine::EntityId::op_Equality(::UnityEngine::EntityId left, ::UnityEngine::EntityId right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::EntityId>(), { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::UnityEngine::EntityId>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool UnityEngine::EntityId::op_Inequality(::UnityEngine::EntityId left, ::UnityEngine::EntityId right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::EntityId>(), { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::UnityEngine::EntityId>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool UnityEngine::EntityId::op_LessThan(::UnityEngine::EntityId left, ::UnityEngine::EntityId right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::EntityId>(), { "op_LessThan", {}, { ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::UnityEngine::EntityId>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool UnityEngine::EntityId::op_GreaterThan(::UnityEngine::EntityId left, ::UnityEngine::EntityId right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::EntityId>(), { "op_GreaterThan", {}, { ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::UnityEngine::EntityId>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool UnityEngine::EntityId::op_LessThanOrEqual(::UnityEngine::EntityId left, ::UnityEngine::EntityId right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::EntityId>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::UnityEngine::EntityId>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool UnityEngine::EntityId::op_GreaterThanOrEqual(::UnityEngine::EntityId left, ::UnityEngine::EntityId right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::EntityId>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::UnityEngine::EntityId>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline int32_t UnityEngine::EntityId::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EntityId>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::EntityId::op_Implicit_int32_t(::UnityEngine::EntityId entityId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EntityId>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::EntityId>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, entityId);
}
inline ::UnityEngine::EntityId UnityEngine::EntityId::op_Implicit___UnityEngine__EntityId(int32_t intValue) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EntityId>(), { "op_Implicit", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EntityId>(nullptr, ___internal_method, intValue);
}
inline ::StringW UnityEngine::EntityId::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EntityId>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::UnityEngine::EntityId UnityEngine::EntityId::From(int32_t input) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EntityId>(), { "From", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EntityId>(nullptr, ___internal_method, input);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::EntityId>"
constexpr UnityEngine::EntityId::operator ::System::IEquatable_1<::UnityEngine::EntityId>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::EntityId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::EntityId>"
constexpr ::System::IEquatable_1<::UnityEngine::EntityId>* UnityEngine::EntityId::i___System__IEquatable_1___UnityEngine__EntityId_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::EntityId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::UnityEngine::EntityId>"
constexpr UnityEngine::EntityId::operator ::System::IComparable_1<::UnityEngine::EntityId>*() {
  return static_cast<::System::IComparable_1<::UnityEngine::EntityId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::UnityEngine::EntityId>"
constexpr ::System::IComparable_1<::UnityEngine::EntityId>* UnityEngine::EntityId::i___System__IComparable_1___UnityEngine__EntityId_() {
  return static_cast<::System::IComparable_1<::UnityEngine::EntityId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Data", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::EntityId::EntityId(int32_t m_Data) noexcept {
  this->m_Data = m_Data;
}
// Ctor Parameters []
constexpr ::UnityEngine::EntityId::EntityId() {}
