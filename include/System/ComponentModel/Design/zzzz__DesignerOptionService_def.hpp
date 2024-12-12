#pragma once
// IWYU pragma private; include "System/ComponentModel/Design/DesignerOptionService.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DesignerOptionService)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::ComponentModel::Design {
class DesignerOptionCollection_DesignerOptionService_WrappedPropertyDescriptor;
}
namespace System::ComponentModel::Design {
class DesignerOptionConverter_DesignerOptionService_OptionPropertyDescriptor;
}
namespace System::ComponentModel::Design {
class DesignerOptionService_DesignerOptionCollection;
}
namespace System::ComponentModel::Design {
class DesignerOptionService_DesignerOptionConverter;
}
namespace System::ComponentModel {
class AttributeCollection;
}
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class Array;
}
namespace System {
class Attribute;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel::Design {
class DesignerOptionCollection_DesignerOptionService_WrappedPropertyDescriptor;
}
namespace System::ComponentModel::Design {
class DesignerOptionConverter_DesignerOptionService_OptionPropertyDescriptor;
}
namespace System::ComponentModel::Design {
class DesignerOptionService;
}
namespace System::ComponentModel::Design {
class DesignerOptionService_DesignerOptionCollection;
}
namespace System::ComponentModel::Design {
class DesignerOptionService_DesignerOptionConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::Design::DesignerOptionCollection_DesignerOptionService_WrappedPropertyDescriptor);
MARK_REF_PTR_T(::System::ComponentModel::Design::DesignerOptionConverter_DesignerOptionService_OptionPropertyDescriptor);
MARK_REF_PTR_T(::System::ComponentModel::Design::DesignerOptionService);
MARK_REF_PTR_T(::System::ComponentModel::Design::DesignerOptionService_DesignerOptionCollection);
MARK_REF_PTR_T(::System::ComponentModel::Design::DesignerOptionService_DesignerOptionConverter);
// Dependencies System.ComponentModel.PropertyDescriptor
namespace System::ComponentModel::Design {
// Is value type: false
// CS Name: System.ComponentModel.Design.DesignerOptionService/DesignerOptionCollection/WrappedPropertyDescriptor
class CORDL_TYPE DesignerOptionCollection_DesignerOptionService_WrappedPropertyDescriptor : public ::System::ComponentModel::PropertyDescriptor {
public:
  // Declarations
  __declspec(property(get = get_Attributes)) ::System::ComponentModel::AttributeCollection* Attributes;

  __declspec(property(get = get_ComponentType)) ::System::Type* ComponentType;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_PropertyType)) ::System::Type* PropertyType;

  /// @brief Field property, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_property, put = __cordl_internal_set_property)) ::System::ComponentModel::PropertyDescriptor* property;

  /// @brief Field target, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_target, put = __cordl_internal_set_target)) ::System::Object* target;

  /// @brief Method CanResetValue, addr 0x447d5c4, size 0x2c, virtual true, abstract: false, final false
  inline bool CanResetValue(::System::Object* component);

  /// @brief Method GetValue, addr 0x447d5f0, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Object* GetValue(::System::Object* component);

  static inline ::System::ComponentModel::Design::DesignerOptionCollection_DesignerOptionService_WrappedPropertyDescriptor* New_ctor(::System::ComponentModel::PropertyDescriptor* property,
                                                                                                                                     ::System::Object* target);

  /// @brief Method ResetValue, addr 0x447d61c, size 0x2c, virtual true, abstract: false, final false
  inline void ResetValue(::System::Object* component);

  /// @brief Method SetValue, addr 0x447d648, size 0x2c, virtual true, abstract: false, final false
  inline void SetValue(::System::Object* component, ::System::Object* value);

  /// @brief Method ShouldSerializeValue, addr 0x447d674, size 0x2c, virtual true, abstract: false, final false
  inline bool ShouldSerializeValue(::System::Object* component);

  constexpr ::System::ComponentModel::PropertyDescriptor* const& __cordl_internal_get_property() const;

  constexpr ::System::ComponentModel::PropertyDescriptor*& __cordl_internal_get_property();

  constexpr ::System::Object* const& __cordl_internal_get_target() const;

  constexpr ::System::Object*& __cordl_internal_get_target();

  constexpr void __cordl_internal_set_property(::System::ComponentModel::PropertyDescriptor* value);

  constexpr void __cordl_internal_set_target(::System::Object* value);

  /// @brief Method .ctor, addr 0x447d46c, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::PropertyDescriptor* property, ::System::Object* target);

  /// @brief Method get_Attributes, addr 0x447d538, size 0x20, virtual true, abstract: false, final false
  inline ::System::ComponentModel::AttributeCollection* get_Attributes();

  /// @brief Method get_ComponentType, addr 0x447d558, size 0x24, virtual true, abstract: false, final false
  inline ::System::Type* get_ComponentType();

  /// @brief Method get_IsReadOnly, addr 0x447d57c, size 0x24, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_PropertyType, addr 0x447d5a0, size 0x24, virtual true, abstract: false, final false
  inline ::System::Type* get_PropertyType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DesignerOptionCollection_DesignerOptionService_WrappedPropertyDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DesignerOptionCollection_DesignerOptionService_WrappedPropertyDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DesignerOptionCollection_DesignerOptionService_WrappedPropertyDescriptor(DesignerOptionCollection_DesignerOptionService_WrappedPropertyDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DesignerOptionCollection_DesignerOptionService_WrappedPropertyDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DesignerOptionCollection_DesignerOptionService_WrappedPropertyDescriptor(DesignerOptionCollection_DesignerOptionService_WrappedPropertyDescriptor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9472 };

  /// @brief Field target, offset: 0x88, size: 0x8, def value: None
  ::System::Object* ___target;

  /// @brief Field property, offset: 0x90, size: 0x8, def value: None
  ::System::ComponentModel::PropertyDescriptor* ___property;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::Design::DesignerOptionCollection_DesignerOptionService_WrappedPropertyDescriptor, ___target) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::Design::DesignerOptionCollection_DesignerOptionService_WrappedPropertyDescriptor, ___property) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ComponentModel::Design::DesignerOptionCollection_DesignerOptionService_WrappedPropertyDescriptor, 0x98>, "Size mismatch!");

} // namespace System::ComponentModel::Design
// Dependencies System.Collections.ICollection, System.Object
namespace System::ComponentModel::Design {
// Is value type: false
// CS Name: System.ComponentModel.Design.DesignerOptionService/DesignerOptionCollection
class CORDL_TYPE DesignerOptionService_DesignerOptionCollection : public ::System::Object {
public:
  // Declarations
  using WrappedPropertyDescriptor = ::System::ComponentModel::Design::DesignerOptionCollection_DesignerOptionService_WrappedPropertyDescriptor;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_Properties)) ::System::ComponentModel::PropertyDescriptorCollection* Properties;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot)) ::System::Object* System_Collections_ICollection_SyncRoot;

  /// @brief Field _children, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__children, put = __cordl_internal_set__children)) ::System::Collections::ArrayList* _children;

  /// @brief Field _name, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__name, put = __cordl_internal_set__name)) ::StringW _name;

  /// @brief Field _properties, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__properties, put = __cordl_internal_set__properties)) ::System::ComponentModel::PropertyDescriptorCollection* _properties;

  /// @brief Field _service, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__service, put = __cordl_internal_set__service)) ::System::ComponentModel::Design::DesignerOptionService* _service;

  /// @brief Field _value, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value)) ::System::Object* _value;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Method CopyTo, addr 0x447d4bc, size 0x44, virtual true, abstract: false, final true
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method EnsurePopulated, addr 0x447cc88, size 0x88, virtual false, abstract: false, final false
  inline void EnsurePopulated();

  /// @brief Method GetEnumerator, addr 0x447d500, size 0x2c, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x447d52c, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x447d534, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get__children() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__children();

  constexpr ::StringW const& __cordl_internal_get__name() const;

  constexpr ::StringW& __cordl_internal_get__name();

  constexpr ::System::ComponentModel::PropertyDescriptorCollection* const& __cordl_internal_get__properties() const;

  constexpr ::System::ComponentModel::PropertyDescriptorCollection*& __cordl_internal_get__properties();

  constexpr ::System::ComponentModel::Design::DesignerOptionService* const& __cordl_internal_get__service() const;

  constexpr ::System::ComponentModel::Design::DesignerOptionService*& __cordl_internal_get__service();

  constexpr ::System::Object* const& __cordl_internal_get__value() const;

  constexpr ::System::Object*& __cordl_internal_get__value();

  constexpr void __cordl_internal_set__children(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set__name(::StringW value);

  constexpr void __cordl_internal_set__properties(::System::ComponentModel::PropertyDescriptorCollection* value);

  constexpr void __cordl_internal_set__service(::System::ComponentModel::Design::DesignerOptionService* value);

  constexpr void __cordl_internal_set__value(::System::Object* value);

  /// @brief Method get_Count, addr 0x447cc5c, size 0x2c, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_Name, addr 0x447cd10, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_Properties, addr 0x447cd18, size 0x754, virtual false, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* get_Properties();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DesignerOptionService_DesignerOptionCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DesignerOptionService_DesignerOptionCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DesignerOptionService_DesignerOptionCollection(DesignerOptionService_DesignerOptionCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DesignerOptionService_DesignerOptionCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DesignerOptionService_DesignerOptionCollection(DesignerOptionService_DesignerOptionCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9473 };

  /// @brief Field _service, offset: 0x10, size: 0x8, def value: None
  ::System::ComponentModel::Design::DesignerOptionService* ____service;

  /// @brief Field _name, offset: 0x18, size: 0x8, def value: None
  ::StringW ____name;

  /// @brief Field _value, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ____value;

  /// @brief Field _children, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____children;

  /// @brief Field _properties, offset: 0x30, size: 0x8, def value: None
  ::System::ComponentModel::PropertyDescriptorCollection* ____properties;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::Design::DesignerOptionService_DesignerOptionCollection, ____service) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::Design::DesignerOptionService_DesignerOptionCollection, ____name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::Design::DesignerOptionService_DesignerOptionCollection, ____value) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::Design::DesignerOptionService_DesignerOptionCollection, ____children) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::Design::DesignerOptionService_DesignerOptionCollection, ____properties) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ComponentModel::Design::DesignerOptionService_DesignerOptionCollection, 0x38>, "Size mismatch!");

} // namespace System::ComponentModel::Design
// Dependencies System.ComponentModel.PropertyDescriptor
namespace System::ComponentModel::Design {
// Is value type: false
// CS Name: System.ComponentModel.Design.DesignerOptionService/DesignerOptionConverter/OptionPropertyDescriptor
class CORDL_TYPE DesignerOptionConverter_DesignerOptionService_OptionPropertyDescriptor : public ::System::ComponentModel::PropertyDescriptor {
public:
  // Declarations
  __declspec(property(get = get_ComponentType)) ::System::Type* ComponentType;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_PropertyType)) ::System::Type* PropertyType;

  /// @brief Field _option, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__option, put = __cordl_internal_set__option)) ::System::ComponentModel::Design::DesignerOptionService_DesignerOptionCollection* _option;

  /// @brief Method CanResetValue, addr 0x447ddf4, size 0x8, virtual true, abstract: false, final false
  inline bool CanResetValue(::System::Object* component);

  /// @brief Method GetValue, addr 0x447ddfc, size 0x8, virtual true, abstract: false, final false
  inline ::System::Object* GetValue(::System::Object* component);

  static inline ::System::ComponentModel::Design::DesignerOptionConverter_DesignerOptionService_OptionPropertyDescriptor*
  New_ctor(::System::ComponentModel::Design::DesignerOptionService_DesignerOptionCollection* option);

  /// @brief Method ResetValue, addr 0x447de04, size 0x4, virtual true, abstract: false, final false
  inline void ResetValue(::System::Object* component);

  /// @brief Method SetValue, addr 0x447de08, size 0x4, virtual true, abstract: false, final false
  inline void SetValue(::System::Object* component, ::System::Object* value);

  /// @brief Method ShouldSerializeValue, addr 0x447de0c, size 0x8, virtual true, abstract: false, final false
  inline bool ShouldSerializeValue(::System::Object* component);

  constexpr ::System::ComponentModel::Design::DesignerOptionService_DesignerOptionCollection* const& __cordl_internal_get__option() const;

  constexpr ::System::ComponentModel::Design::DesignerOptionService_DesignerOptionCollection*& __cordl_internal_get__option();

  constexpr void __cordl_internal_set__option(::System::ComponentModel::Design::DesignerOptionService_DesignerOptionCollection* value);

  /// @brief Method .ctor, addr 0x447dc90, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::Design::DesignerOptionService_DesignerOptionCollection* option);

  /// @brief Method get_ComponentType, addr 0x447ddb4, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Type* get_ComponentType();

  /// @brief Method get_IsReadOnly, addr 0x447ddd0, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_PropertyType, addr 0x447ddd8, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Type* get_PropertyType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DesignerOptionConverter_DesignerOptionService_OptionPropertyDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DesignerOptionConverter_DesignerOptionService_OptionPropertyDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DesignerOptionConverter_DesignerOptionService_OptionPropertyDescriptor(DesignerOptionConverter_DesignerOptionService_OptionPropertyDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DesignerOptionConverter_DesignerOptionService_OptionPropertyDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DesignerOptionConverter_DesignerOptionService_OptionPropertyDescriptor(DesignerOptionConverter_DesignerOptionService_OptionPropertyDescriptor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9474 };

  /// @brief Field _option, offset: 0x88, size: 0x8, def value: None
  ::System::ComponentModel::Design::DesignerOptionService_DesignerOptionCollection* ____option;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::Design::DesignerOptionConverter_DesignerOptionService_OptionPropertyDescriptor, ____option) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ComponentModel::Design::DesignerOptionConverter_DesignerOptionService_OptionPropertyDescriptor, 0x90>, "Size mismatch!");

} // namespace System::ComponentModel::Design
// Dependencies System.ComponentModel.TypeConverter
namespace System::ComponentModel::Design {
// Is value type: false
// CS Name: System.ComponentModel.Design.DesignerOptionService/DesignerOptionConverter
class CORDL_TYPE DesignerOptionService_DesignerOptionConverter : public ::System::ComponentModel::TypeConverter {
public:
  // Declarations
  using OptionPropertyDescriptor = ::System::ComponentModel::Design::DesignerOptionConverter_DesignerOptionService_OptionPropertyDescriptor;

  /// @brief Method ConvertTo, addr 0x447dcc8, size 0xe4, virtual true, abstract: false, final false
  inline ::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* cxt, ::System::Globalization::CultureInfo* culture, ::System::Object* value, ::System::Type* destinationType);

  /// @brief Method GetProperties, addr 0x447d6a8, size 0x5e8, virtual true, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::ComponentModel::ITypeDescriptorContext* cxt, ::System::Object* value,
                                                                               ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method GetPropertiesSupported, addr 0x447d6a0, size 0x8, virtual true, abstract: false, final false
  inline bool GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext* cxt);

  static inline ::System::ComponentModel::Design::DesignerOptionService_DesignerOptionConverter* New_ctor();

  /// @brief Method .ctor, addr 0x447ddac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DesignerOptionService_DesignerOptionConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DesignerOptionService_DesignerOptionConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DesignerOptionService_DesignerOptionConverter(DesignerOptionService_DesignerOptionConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DesignerOptionService_DesignerOptionConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DesignerOptionService_DesignerOptionConverter(DesignerOptionService_DesignerOptionConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9475 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::Design::DesignerOptionService_DesignerOptionConverter, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel::Design
// Dependencies System.Object
namespace System::ComponentModel::Design {
// Is value type: false
// CS Name: System.ComponentModel.Design.DesignerOptionService
class CORDL_TYPE DesignerOptionService : public ::System::Object {
public:
  // Declarations
  using DesignerOptionCollection = ::System::ComponentModel::Design::DesignerOptionService_DesignerOptionCollection;

  using DesignerOptionConverter = ::System::ComponentModel::Design::DesignerOptionService_DesignerOptionConverter;

  /// @brief Method PopulateOptionCollection, addr 0x447cc58, size 0x4, virtual true, abstract: false, final false
  inline void PopulateOptionCollection(::System::ComponentModel::Design::DesignerOptionService_DesignerOptionCollection* options);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DesignerOptionService();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DesignerOptionService", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DesignerOptionService(DesignerOptionService&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DesignerOptionService", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DesignerOptionService(DesignerOptionService const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9476 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::Design::DesignerOptionService, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel::Design
NEED_NO_BOX(::System::ComponentModel::Design::DesignerOptionCollection_DesignerOptionService_WrappedPropertyDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Design::DesignerOptionCollection_DesignerOptionService_WrappedPropertyDescriptor*, "System.ComponentModel.Design",
                       "DesignerOptionService/DesignerOptionCollection/WrappedPropertyDescriptor");
NEED_NO_BOX(::System::ComponentModel::Design::DesignerOptionConverter_DesignerOptionService_OptionPropertyDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Design::DesignerOptionConverter_DesignerOptionService_OptionPropertyDescriptor*, "System.ComponentModel.Design",
                       "DesignerOptionService/DesignerOptionConverter/OptionPropertyDescriptor");
NEED_NO_BOX(::System::ComponentModel::Design::DesignerOptionService);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Design::DesignerOptionService*, "System.ComponentModel.Design", "DesignerOptionService");
NEED_NO_BOX(::System::ComponentModel::Design::DesignerOptionService_DesignerOptionCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Design::DesignerOptionService_DesignerOptionCollection*, "System.ComponentModel.Design", "DesignerOptionService/DesignerOptionCollection");
NEED_NO_BOX(::System::ComponentModel::Design::DesignerOptionService_DesignerOptionConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Design::DesignerOptionService_DesignerOptionConverter*, "System.ComponentModel.Design", "DesignerOptionService/DesignerOptionConverter");
