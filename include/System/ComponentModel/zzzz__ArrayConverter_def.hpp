#pragma once
// IWYU pragma private; include "System/ComponentModel/ArrayConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__CollectionConverter_def.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayConverter)
namespace System::ComponentModel {
class ArrayConverter_ArrayPropertyDescriptor;
}
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System::Globalization {
class CultureInfo;
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
namespace System::ComponentModel {
class ArrayConverter;
}
namespace System::ComponentModel {
class ArrayConverter_ArrayPropertyDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ArrayConverter);
MARK_REF_PTR_T(::System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor);
// Dependencies System.ComponentModel.TypeConverter::SimplePropertyDescriptor
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor
class CORDL_TYPE ArrayConverter_ArrayPropertyDescriptor : public ::System::ComponentModel::TypeConverter_SimplePropertyDescriptor {
public:
  // Declarations
  /// @brief Field _index, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get__index, put = __cordl_internal_set__index)) int32_t _index;

  /// @brief Method GetValue, addr 0x44485e8, size 0xb4, virtual true, abstract: false, final false
  inline ::System::Object* GetValue(::System::Object* instance);

  static inline ::System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor* New_ctor(::System::Type* arrayType, ::System::Type* elementType, int32_t index);

  /// @brief Method SetValue, addr 0x444869c, size 0x100, virtual true, abstract: false, final false
  inline void SetValue(::System::Object* instance, ::System::Object* value);

  constexpr int32_t const& __cordl_internal_get__index() const;

  constexpr int32_t& __cordl_internal_get__index();

  constexpr void __cordl_internal_set__index(int32_t value);

  /// @brief Method .ctor, addr 0x4448420, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* arrayType, ::System::Type* elementType, int32_t index);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArrayConverter_ArrayPropertyDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArrayConverter_ArrayPropertyDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArrayConverter_ArrayPropertyDescriptor(ArrayConverter_ArrayPropertyDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArrayConverter_ArrayPropertyDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArrayConverter_ArrayPropertyDescriptor(ArrayConverter_ArrayPropertyDescriptor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9360 };

  /// @brief Field _index, offset: 0x98, size: 0x4, def value: None
  int32_t ____index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor, ____index) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor, 0xa0>, "Size mismatch!");

} // namespace System::ComponentModel
// Dependencies System.ComponentModel.CollectionConverter
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.ArrayConverter
class CORDL_TYPE ArrayConverter : public ::System::ComponentModel::CollectionConverter {
public:
  // Declarations
  using ArrayPropertyDescriptor = ::System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor;

  /// @brief Method ConvertTo, addr 0x4447f04, size 0x1c4, virtual true, abstract: false, final false
  inline ::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value,
                                     ::System::Type* destinationType);

  /// @brief Method GetProperties, addr 0x4448248, size 0x1d8, virtual true, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value,
                                                                               ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method GetPropertiesSupported, addr 0x44485d0, size 0x8, virtual true, abstract: false, final false
  inline bool GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext* context);

  static inline ::System::ComponentModel::ArrayConverter* New_ctor();

  /// @brief Method .ctor, addr 0x44485d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArrayConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArrayConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArrayConverter(ArrayConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArrayConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArrayConverter(ArrayConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9361 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ArrayConverter, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ArrayConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ArrayConverter*, "System.ComponentModel", "ArrayConverter");
NEED_NO_BOX(::System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ArrayConverter_ArrayPropertyDescriptor*, "System.ComponentModel", "ArrayConverter/ArrayPropertyDescriptor");
