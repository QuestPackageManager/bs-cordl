#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LinkedPoolItem_1)
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
template <typename T> class LinkedPoolItem_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::UIR::LinkedPoolItem_1);
// Type: UnityEngine.UIElements.UIR::LinkedPoolItem`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7399))
// CS Name: ::UnityEngine.UIElements.UIR::LinkedPoolItem`1<T>*
class CORDL_TYPE LinkedPoolItem_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field poolNext, offset 0x10, size 0x8
  __declspec(property(get = __get_poolNext, put = __set_poolNext)) T poolNext;

  constexpr T& __get_poolNext();

  constexpr T const& __get_poolNext() const;

  constexpr void __set_poolNext(T value);

  static inline ::UnityEngine::UIElements::UIR::LinkedPoolItem_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LinkedPoolItem_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LinkedPoolItem_1(LinkedPoolItem_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LinkedPoolItem_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LinkedPoolItem_1(LinkedPoolItem_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LinkedPoolItem_1();

public:
  /// @brief Field poolNext, offset: 0x10, size: 0x8, def value: None
  T ___poolNext;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::UIR::LinkedPoolItem_1, "UnityEngine.UIElements.UIR", "LinkedPoolItem`1");
