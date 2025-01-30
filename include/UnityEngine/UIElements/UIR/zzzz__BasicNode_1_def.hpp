#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/BasicNode_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_def.hpp"
CORDL_MODULE_EXPORT(BasicNode_1)
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
template <typename T> class BasicNode_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::UIR::BasicNode_1);
// Dependencies UnityEngine.UIElements.UIR.LinkedPoolItem`1<T>
namespace UnityEngine::UIElements::UIR {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.BasicNode`1<T>
class CORDL_TYPE BasicNode_1 : public ::UnityEngine::UIElements::UIR::LinkedPoolItem_1<::UnityEngine::UIElements::UIR::BasicNode_1<T>*> {
public:
  // Declarations
  /// @brief Field data, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) T data;

  /// @brief Field next, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_next, put = __cordl_internal_set_next)) ::UnityEngine::UIElements::UIR::BasicNode_1<T>* next;

  /// @brief Method AppendTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AppendTo(::ByRef<::UnityEngine::UIElements::UIR::BasicNode_1<T>*> first);

  static inline ::UnityEngine::UIElements::UIR::BasicNode_1<T>* New_ctor();

  constexpr T const& __cordl_internal_get_data() const;

  constexpr T& __cordl_internal_get_data();

  constexpr ::UnityEngine::UIElements::UIR::BasicNode_1<T>* const& __cordl_internal_get_next() const;

  constexpr ::UnityEngine::UIElements::UIR::BasicNode_1<T>*& __cordl_internal_get_next();

  constexpr void __cordl_internal_set_data(T value);

  constexpr void __cordl_internal_set_next(::UnityEngine::UIElements::UIR::BasicNode_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicNode_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BasicNode_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicNode_1(BasicNode_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicNode_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicNode_1(BasicNode_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6369 };

  /// @brief Field next, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BasicNode_1<T>* ___next;

  /// @brief Field data, offset: 0x20, size: 0x8, def value: None
  T ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::UIR::BasicNode_1, "UnityEngine.UIElements.UIR", "BasicNode`1");
