#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleDataRef_1)
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
template <typename T> class __StyleDataRef_1__RefCounted;
}
namespace System {
template <typename T> class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> class __StyleDataRef_1__RefCounted;
}
namespace UnityEngine::UIElements {
template <typename T> struct StyleDataRef_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::__StyleDataRef_1__RefCounted);
MARK_GEN_VAL_T(::UnityEngine::UIElements::StyleDataRef_1);
// Type: ::RefCounted
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7314))
// CS Name: ::StyleDataRef`1::RefCounted<T>*
class CORDL_TYPE __StyleDataRef_1__RefCounted : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_RefCount, offset 0x10, size 0x4
  __declspec(property(get = __get_m_RefCount, put = __set_m_RefCount)) int32_t m_RefCount;

  /// @brief Field m_Id, offset 0x14, size 0x4
  __declspec(property(get = __get_m_Id, put = __set_m_Id)) uint32_t m_Id;

  /// @brief Field value, offset 0x18, size 0x8
  __declspec(property(get = __get_value, put = __set_value)) T value;

  /// @brief Field m_NextId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_m_NextId, put = setStaticF_m_NextId)) uint32_t m_NextId;

  __declspec(property(get = get_refCount)) int32_t refCount;

  constexpr int32_t& __get_m_RefCount();

  constexpr int32_t const& __get_m_RefCount() const;

  constexpr void __set_m_RefCount(int32_t value);

  constexpr uint32_t& __get_m_Id();

  constexpr uint32_t const& __get_m_Id() const;

  constexpr void __set_m_Id(uint32_t value);

  constexpr T& __get_value();

  constexpr T const& __get_value() const;

  constexpr void __set_value(T value);

  static inline void setStaticF_m_NextId(uint32_t value);

  static inline uint32_t getStaticF_m_NextId();

  /// @brief Method get_refCount addr 0x0 size 0xffffffffffffffff virtual false final false
  inline int32_t get_refCount();

  static inline ::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void Acquire();

  /// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void Release();

  /// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<T>* Copy();

  // Ctor Parameters [CppParam { name: "", ty: "__StyleDataRef_1__RefCounted", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StyleDataRef_1__RefCounted(__StyleDataRef_1__RefCounted&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StyleDataRef_1__RefCounted", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StyleDataRef_1__RefCounted(__StyleDataRef_1__RefCounted const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StyleDataRef_1__RefCounted();

public:
  /// @brief Field m_RefCount, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_RefCount;

  /// @brief Field m_Id, offset: 0x14, size: 0x4, def value: None
  uint32_t ___m_Id;

  /// @brief Field value, offset: 0x18, size: 0x8, def value: None
  T ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::StyleDataRef`1
// SizeInfo { instance_size: 8, native_size: 24, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7315))
// CS Name: ::UnityEngine.UIElements::StyleDataRef`1<T>
struct CORDL_TYPE StyleDataRef_1 {
public:
  // Declarations
  using RefCounted = ::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<T>;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleDataRef_1<T>>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleDataRef_1<T>>*();

  /// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::UnityEngine::UIElements::StyleDataRef_1<T> Acquire();

  /// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void Release();

  /// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void CopyFrom(::UnityEngine::UIElements::StyleDataRef_1<T> other);

  /// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ByRef<T> Read();

  /// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ByRef<T> Write();

  /// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::UnityEngine::UIElements::StyleDataRef_1<T> Create();

  /// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method op_Equality addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline bool op_Equality(::UnityEngine::UIElements::StyleDataRef_1<T> lhs, ::UnityEngine::UIElements::StyleDataRef_1<T> rhs);

  /// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool Equals(::UnityEngine::UIElements::StyleDataRef_1<T> other);

  /// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool Equals(::System::Object* obj);

  // Ctor Parameters [CppParam { name: "m_Ref", ty: "::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<T>*", modifiers: "", def_value: None }]
  constexpr StyleDataRef_1(::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<T>* m_Ref) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleDataRef_1();

  /// @brief Field m_Ref, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::__StyleDataRef_1__RefCounted<T>* m_Ref;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::__StyleDataRef_1__RefCounted, "UnityEngine.UIElements", "StyleDataRef`1/RefCounted");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::UIElements::StyleDataRef_1, "UnityEngine.UIElements", "StyleDataRef`1");
