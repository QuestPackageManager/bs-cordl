#pragma once
// IWYU pragma private; include "Unity/Properties/PropertyGetter_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(PropertyGetter_2)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Unity::Properties {
template <typename TContainer, typename TValue> class PropertyGetter_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Properties::PropertyGetter_2);
// Dependencies System.MulticastDelegate
namespace Unity::Properties {
// cpp template
template <typename TContainer, typename TValue>
// Is value type: false
// CS Name: Unity.Properties.PropertyGetter`2<TContainer,TValue>
class CORDL_TYPE PropertyGetter_2 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TValue Invoke(::ByRef<TContainer> container);

  static inline ::Unity::Properties::PropertyGetter_2<TContainer, TValue>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyGetter_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyGetter_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyGetter_2(PropertyGetter_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyGetter_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyGetter_2(PropertyGetter_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17437 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::PropertyGetter_2, "Unity.Properties", "PropertyGetter`2");
