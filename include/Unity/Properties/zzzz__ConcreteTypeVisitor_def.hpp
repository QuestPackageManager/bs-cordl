#pragma once
// IWYU pragma private; include "Unity/Properties/ConcreteTypeVisitor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ConcreteTypeVisitor)
namespace Unity::Properties {
class IPropertyBagVisitor;
}
namespace Unity::Properties {
template <typename TContainer> class IPropertyBag_1;
}
// Forward declare root types
namespace Unity::Properties {
class ConcreteTypeVisitor;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::ConcreteTypeVisitor);
// Dependencies System.Object
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.ConcreteTypeVisitor
class CORDL_TYPE ConcreteTypeVisitor : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Properties::IPropertyBagVisitor"
  constexpr operator ::Unity::Properties::IPropertyBagVisitor*() noexcept;

  static inline ::Unity::Properties::ConcreteTypeVisitor* New_ctor();

  /// @brief Method Unity.Properties.IPropertyBagVisitor.Visit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename TContainer> inline void Unity_Properties_IPropertyBagVisitor_Visit(::Unity::Properties::IPropertyBag_1<TContainer>* properties, ::ByRef<TContainer> container);

  /// @brief Method VisitContainer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename TContainer> inline void VisitContainer(::ByRef<TContainer> container);

  /// @brief Method .ctor, addr 0x696dc9c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Unity::Properties::IPropertyBagVisitor"
  constexpr ::Unity::Properties::IPropertyBagVisitor* i___Unity__Properties__IPropertyBagVisitor() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConcreteTypeVisitor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConcreteTypeVisitor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConcreteTypeVisitor(ConcreteTypeVisitor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConcreteTypeVisitor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConcreteTypeVisitor(ConcreteTypeVisitor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19365 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::ConcreteTypeVisitor, 0x10>, "Size mismatch!");

} // namespace Unity::Properties
NEED_NO_BOX(::Unity::Properties::ConcreteTypeVisitor);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::ConcreteTypeVisitor*, "Unity.Properties", "ConcreteTypeVisitor");
