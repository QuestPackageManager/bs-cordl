#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/ReflectedPropertyBag_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
CORDL_MODULE_EXPORT(ReflectedPropertyBag_1)
namespace Unity::Properties {
template <typename TContainer, typename TValue> class Property_2;
}
// Forward declare root types
namespace Unity::Properties::Internal {
template <typename TContainer> class ReflectedPropertyBag_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Properties::Internal::ReflectedPropertyBag_1);
// Dependencies Unity.Properties.ContainerPropertyBag`1<TContainer>
namespace Unity::Properties::Internal {
// cpp template
template <typename TContainer>
// Is value type: false
// CS Name: Unity.Properties.Internal.ReflectedPropertyBag`1<TContainer>
class CORDL_TYPE ReflectedPropertyBag_1 : public ::Unity::Properties::ContainerPropertyBag_1<TContainer> {
public:
  // Declarations
  /// @brief Method AddProperty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> inline void AddProperty(::Unity::Properties::Property_2<TContainer, TValue>* property);

  static inline ::Unity::Properties::Internal::ReflectedPropertyBag_1<TContainer>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectedPropertyBag_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectedPropertyBag_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectedPropertyBag_1(ReflectedPropertyBag_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectedPropertyBag_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectedPropertyBag_1(ReflectedPropertyBag_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17539 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties::Internal
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::Internal::ReflectedPropertyBag_1, "Unity.Properties.Internal", "ReflectedPropertyBag`1");
