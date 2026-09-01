#pragma once
// IWYU pragma private; include "Unity\Hierarchy\HierarchyNodeType.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeType_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeType.get_Null
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Unity::Hierarchy::HierarchyNodeType> (*)()>(&::Unity::Hierarchy::HierarchyNodeType::get_Null)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6b3a54c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeType>(), { "get_Null", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeType.get_Id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Hierarchy::HierarchyNodeType::*)()>(&::Unity::Hierarchy::HierarchyNodeType::get_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b3a594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeType>(), { "get_Id", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeType.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Hierarchy::HierarchyNodeType>, ::by_ref<::Unity::Hierarchy::HierarchyNodeType>)>(
    &::Unity::Hierarchy::HierarchyNodeType::op_Equality)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b3a59c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeType>(),
                            { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNodeType>>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNodeType>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeType.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Hierarchy::HierarchyNodeType::*)(::Unity::Hierarchy::HierarchyNodeType)>(&::Unity::Hierarchy::HierarchyNodeType::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6b3a5b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeType>(), { "Equals", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeType.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Hierarchy::HierarchyNodeType::*)()>(&::Unity::Hierarchy::HierarchyNodeType::ToString)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6b3a5c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeType>(), { ::i2c::class_of<::Unity::Hierarchy::HierarchyNodeType>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeType.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Hierarchy::HierarchyNodeType::*)(::System::Object*)>(&::Unity::Hierarchy::HierarchyNodeType::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6b3a6d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeType>(), { ::i2c::class_of<::Unity::Hierarchy::HierarchyNodeType>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeType.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Hierarchy::HierarchyNodeType::*)()>(&::Unity::Hierarchy::HierarchyNodeType::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b3a754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeType>(), { ::i2c::class_of<::Unity::Hierarchy::HierarchyNodeType>(), 2 }));
    return ___internal_method;
  }
};
inline void Unity::Hierarchy::HierarchyNodeType::setStaticF_s_Null(::Unity::Hierarchy::HierarchyNodeType value) {
  ::cordl_internals::setStaticField<::Unity::Hierarchy::HierarchyNodeType, "s_Null", ::Unity::Hierarchy::HierarchyNodeType>(std::forward<::Unity::Hierarchy::HierarchyNodeType>(value));
}
inline ::Unity::Hierarchy::HierarchyNodeType Unity::Hierarchy::HierarchyNodeType::getStaticF_s_Null() {
  return ::cordl_internals::getStaticField<::Unity::Hierarchy::HierarchyNodeType, "s_Null", ::Unity::Hierarchy::HierarchyNodeType>();
}
inline ::by_ref<::Unity::Hierarchy::HierarchyNodeType> Unity::Hierarchy::HierarchyNodeType::get_Null() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeType>(), { "get_Null", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::Unity::Hierarchy::HierarchyNodeType>>(nullptr, ___internal_method);
}
inline int32_t Unity::Hierarchy::HierarchyNodeType::get_Id() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeType>(), { "get_Id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Unity::Hierarchy::HierarchyNodeType::op_Equality(::by_ref<::Unity::Hierarchy::HierarchyNodeType> lhs, ::by_ref<::Unity::Hierarchy::HierarchyNodeType> rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeType>(),
                          { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNodeType>>(), ::i2c::type_of<::by_ref<::Unity::Hierarchy::HierarchyNodeType>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool Unity::Hierarchy::HierarchyNodeType::Equals(::Unity::Hierarchy::HierarchyNodeType other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Hierarchy::HierarchyNodeType>(), { "Equals", {}, { ::i2c::type_of<::Unity::Hierarchy::HierarchyNodeType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::StringW Unity::Hierarchy::HierarchyNodeType::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Hierarchy::HierarchyNodeType>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool Unity::Hierarchy::HierarchyNodeType::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Hierarchy::HierarchyNodeType>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Unity::Hierarchy::HierarchyNodeType::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Hierarchy::HierarchyNodeType>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Hierarchy::HierarchyNodeType>"
constexpr Unity::Hierarchy::HierarchyNodeType::operator ::System::IEquatable_1<::Unity::Hierarchy::HierarchyNodeType>*() {
  return static_cast<::System::IEquatable_1<::Unity::Hierarchy::HierarchyNodeType>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Hierarchy::HierarchyNodeType>"
constexpr ::System::IEquatable_1<::Unity::Hierarchy::HierarchyNodeType>* Unity::Hierarchy::HierarchyNodeType::i___System__IEquatable_1___Unity__Hierarchy__HierarchyNodeType_() {
  return static_cast<::System::IEquatable_1<::Unity::Hierarchy::HierarchyNodeType>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Id", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Hierarchy::HierarchyNodeType::HierarchyNodeType(int32_t m_Id) noexcept {
  this->m_Id = m_Id;
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyNodeType::HierarchyNodeType() {}
