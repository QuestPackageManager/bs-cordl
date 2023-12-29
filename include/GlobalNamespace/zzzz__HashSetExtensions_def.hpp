#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HashSetExtensions)
namespace GlobalNamespace {
template <typename T> class __HashSetExtensions__HashSetDelegateHolder_1;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Reflection {
class MethodInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class HashSetExtensions;
}
namespace GlobalNamespace {
template <typename T> class __HashSetExtensions__HashSetDelegateHolder_1;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HashSetExtensions);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__HashSetExtensions__HashSetDelegateHolder_1);
// Type: ::HashSetDelegateHolder`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3454)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10533))
// CS Name: ::HashSetExtensions::HashSetDelegateHolder`1<T>*
class CORDL_TYPE __HashSetExtensions__HashSetDelegateHolder_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <InitializeMethod>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__InitializeMethod_k__BackingField,
                             put = setStaticF__InitializeMethod_k__BackingField))::System::Reflection::MethodInfo* _InitializeMethod_k__BackingField;

  static inline void setStaticF__InitializeMethod_k__BackingField(::System::Reflection::MethodInfo* value);

  static inline ::System::Reflection::MethodInfo* getStaticF__InitializeMethod_k__BackingField();

  /// @brief Method get_InitializeMethod addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::System::Reflection::MethodInfo* get_InitializeMethod();

  // Ctor Parameters [CppParam { name: "", ty: "__HashSetExtensions__HashSetDelegateHolder_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HashSetExtensions__HashSetDelegateHolder_1(__HashSetExtensions__HashSetDelegateHolder_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HashSetExtensions__HashSetDelegateHolder_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HashSetExtensions__HashSetDelegateHolder_1(__HashSetExtensions__HashSetDelegateHolder_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HashSetExtensions__HashSetDelegateHolder_1();

public:
  /// @brief Field Flags value: static_cast<int32_t>(0x24)
  static ::System::Reflection::BindingFlags const Flags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::HashSetExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10534))
// CS Name: ::HashSetExtensions*
class CORDL_TYPE HashSetExtensions : public ::System::Object {
public:
  // Declarations
  template <typename T> using HashSetDelegateHolder_1 = ::GlobalNamespace::__HashSetExtensions__HashSetDelegateHolder_1<T>;

  /// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void SetCapacity(::System::Collections::Generic::HashSet_1<T>* hs, int32_t capacity);

  /// @brief Method GetHashSet addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::System::Collections::Generic::HashSet_1<T>* GetHashSet(int32_t capacity);

  // Ctor Parameters [CppParam { name: "", ty: "HashSetExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HashSetExtensions(HashSetExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HashSetExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HashSetExtensions(HashSetExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HashSetExtensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HashSetExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HashSetExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HashSetExtensions*, "", "HashSetExtensions");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__HashSetExtensions__HashSetDelegateHolder_1, "", "HashSetExtensions/HashSetDelegateHolder`1");
