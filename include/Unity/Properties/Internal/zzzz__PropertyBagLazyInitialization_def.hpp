#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/PropertyBagLazyInitialization.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PropertyBagLazyInitialization)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class Type;
}
namespace Unity::Properties {
class IPropertyBag;
}
// Forward declare root types
namespace Unity::Properties::Internal {
class PropertyBagLazyInitialization;
}
// Write type traits
MARK_REF_T(::Unity::Properties::Internal::PropertyBagLazyInitialization*);
DEFINE_IL2CPP_CLASS(::Unity::Properties::Internal::PropertyBagLazyInitialization*, "Unity.Properties.Internal", "PropertyBagLazyInitialization");
// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
// Dependencies System.Object
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.PropertyBagLazyInitialization
class CORDL_TYPE PropertyBagLazyInitialization : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_LazyPropertyBagRegistrations, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_LazyPropertyBagRegistrations,
                      put = setStaticF_s_LazyPropertyBagRegistrations)) ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_1<::Unity::Properties::IPropertyBag*>*>*
      s_LazyPropertyBagRegistrations;

  /// @brief Method AddLazyRegistration, addr 0x701323c, size 0xa8, virtual false, abstract: false, final false
  static inline void AddLazyRegistration(::System::Type* type, ::System::Func_1<::Unity::Properties::IPropertyBag*>* registration);

  /// @brief Method HasLazyRegistration, addr 0x70132e4, size 0xa0, virtual false, abstract: false, final false
  static inline bool HasLazyRegistration(::System::Type* type);

  /// @brief Method RemoveRegistration, addr 0x701341c, size 0x88, virtual false, abstract: false, final false
  static inline void RemoveRegistration(::System::Type* type);

  /// @brief Method TryGetRegistrationDelegate, addr 0x7013384, size 0x98, virtual false, abstract: false, final false
  static inline bool TryGetRegistrationDelegate(::System::Type* type, ::by_ref<::System::Func_1<::Unity::Properties::IPropertyBag*>*> registrationDelegate);

  static inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_1<::Unity::Properties::IPropertyBag*>*>* getStaticF_s_LazyPropertyBagRegistrations();

  static inline void setStaticF_s_LazyPropertyBagRegistrations(::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_1<::Unity::Properties::IPropertyBag*>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBagLazyInitialization();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBagLazyInitialization", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBagLazyInitialization(PropertyBagLazyInitialization&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBagLazyInitialization", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBagLazyInitialization(PropertyBagLazyInitialization const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20844 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Properties::Internal::PropertyBagLazyInitialization) == 0x10, "Size mismatch!");

} // namespace Unity::Properties::Internal
