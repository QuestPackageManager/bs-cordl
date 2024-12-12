#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/PropertyBagStore.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PropertyBagStore)
namespace System::Collections::Concurrent {
template <typename TKey, typename TValue> class ConcurrentDictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Type;
}
namespace Unity::Properties::Internal {
template <typename TContainer> struct PropertyBagStore_TypedStore_1;
}
namespace Unity::Properties::Internal {
class ReflectedPropertyBagProvider;
}
namespace Unity::Properties {
template <typename TContainer> class IPropertyBag_1;
}
namespace Unity::Properties {
class IPropertyBag;
}
// Forward declare root types
namespace Unity::Properties::Internal {
class PropertyBagStore;
}
namespace Unity::Properties::Internal {
template <typename TContainer> struct PropertyBagStore_TypedStore_1;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::Internal::PropertyBagStore);
MARK_GEN_VAL_T(::Unity::Properties::Internal::PropertyBagStore_TypedStore_1);
// Dependencies
namespace Unity::Properties::Internal {
// cpp template
template <typename TContainer>
// Is value type: true
// CS Name: Unity.Properties.Internal.PropertyBagStore/TypedStore`1<TContainer>
#pragma pack(push, 0)
struct CORDL_TYPE PropertyBagStore_TypedStore_1 {
public:
  // Declarations
  /// @brief Field PropertyBag, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PropertyBag, put = setStaticF_PropertyBag)) ::Unity::Properties::IPropertyBag_1<TContainer>* PropertyBag;

  static inline ::Unity::Properties::IPropertyBag_1<TContainer>* getStaticF_PropertyBag();

  static inline void setStaticF_PropertyBag(::Unity::Properties::IPropertyBag_1<TContainer>* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBagStore_TypedStore_1();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17531 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace Unity::Properties::Internal
// Dependencies System.Object
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.PropertyBagStore
class CORDL_TYPE PropertyBagStore : public ::System::Object {
public:
  // Declarations
  template <typename TContainer> using TypedStore_1 = ::Unity::Properties::Internal::PropertyBagStore_TypedStore_1<TContainer>;

  /// @brief Field NewTypeRegistered, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_NewTypeRegistered, put = setStaticF_NewTypeRegistered)) ::System::Action_2<::System::Type*, ::Unity::Properties::IPropertyBag*>* NewTypeRegistered;

  /// @brief Field s_PropertyBagProvider, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_PropertyBagProvider, put = setStaticF_s_PropertyBagProvider)) ::Unity::Properties::Internal::ReflectedPropertyBagProvider* s_PropertyBagProvider;

  /// @brief Field s_PropertyBags, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_PropertyBags,
                      put = setStaticF_s_PropertyBags)) ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::Unity::Properties::IPropertyBag*>* s_PropertyBags;

  /// @brief Field s_RegisteredTypes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_RegisteredTypes, put = setStaticF_s_RegisteredTypes)) ::System::Collections::Generic::List_1<::System::Type*>* s_RegisteredTypes;

  /// @brief Method AddPropertyBag, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContainer> static inline void AddPropertyBag(::Unity::Properties::IPropertyBag_1<TContainer>* propertyBag);

  /// @brief Method GetPropertyBag, addr 0x49122e8, size 0x284, virtual false, abstract: false, final false
  static inline ::Unity::Properties::IPropertyBag* GetPropertyBag(::System::Type* type);

  /// @brief Method GetPropertyBag, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContainer> static inline ::Unity::Properties::IPropertyBag_1<TContainer>* GetPropertyBag();

  static inline ::System::Action_2<::System::Type*, ::Unity::Properties::IPropertyBag*>* getStaticF_NewTypeRegistered();

  static inline ::Unity::Properties::Internal::ReflectedPropertyBagProvider* getStaticF_s_PropertyBagProvider();

  static inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::Unity::Properties::IPropertyBag*>* getStaticF_s_PropertyBags();

  static inline ::System::Collections::Generic::List_1<::System::Type*>* getStaticF_s_RegisteredTypes();

  static inline void setStaticF_NewTypeRegistered(::System::Action_2<::System::Type*, ::Unity::Properties::IPropertyBag*>* value);

  static inline void setStaticF_s_PropertyBagProvider(::Unity::Properties::Internal::ReflectedPropertyBagProvider* value);

  static inline void setStaticF_s_PropertyBags(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::Unity::Properties::IPropertyBag*>* value);

  static inline void setStaticF_s_RegisteredTypes(::System::Collections::Generic::List_1<::System::Type*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBagStore();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBagStore", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBagStore(PropertyBagStore&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBagStore", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBagStore(PropertyBagStore const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17532 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::PropertyBagStore, 0x10>, "Size mismatch!");

} // namespace Unity::Properties::Internal
NEED_NO_BOX(::Unity::Properties::Internal::PropertyBagStore);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::PropertyBagStore*, "Unity.Properties.Internal", "PropertyBagStore");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Properties::Internal::PropertyBagStore_TypedStore_1, "Unity.Properties.Internal", "PropertyBagStore/TypedStore`1");
