#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__CollectionConverter_def.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayConverter)
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System::ComponentModel {
class __ArrayConverter__ArrayPropertyDescriptor;
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
class __ArrayConverter__ArrayPropertyDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ArrayConverter);
MARK_REF_PTR_T(::System::ComponentModel::__ArrayConverter__ArrayPropertyDescriptor);
// Type: ::ArrayPropertyDescriptor
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 156, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::ArrayConverter::ArrayPropertyDescriptor*
class CORDL_TYPE __ArrayConverter__ArrayPropertyDescriptor : public ::System::ComponentModel::__TypeConverter__SimplePropertyDescriptor {
public:
  // Declarations
  /// @brief Field _index, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get__index, put = __cordl_internal_set__index)) int32_t _index;

  /// @brief Method GetValue, addr 0x2e353a0, size 0xb4, virtual true, abstract: false, final false
  inline ::System::Object* GetValue(::System::Object* instance);

  static inline ::System::ComponentModel::__ArrayConverter__ArrayPropertyDescriptor* New_ctor(::System::Type* arrayType, ::System::Type* elementType, int32_t index);

  /// @brief Method SetValue, addr 0x2e35454, size 0x100, virtual true, abstract: false, final false
  inline void SetValue(::System::Object* instance, ::System::Object* value);

  constexpr int32_t const& __cordl_internal_get__index() const;

  constexpr int32_t& __cordl_internal_get__index();

  constexpr void __cordl_internal_set__index(int32_t value);

  /// @brief Method .ctor, addr 0x2e351e8, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* arrayType, ::System::Type* elementType, int32_t index);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ArrayConverter__ArrayPropertyDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ArrayConverter__ArrayPropertyDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ArrayConverter__ArrayPropertyDescriptor(__ArrayConverter__ArrayPropertyDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ArrayConverter__ArrayPropertyDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ArrayConverter__ArrayPropertyDescriptor(__ArrayConverter__ArrayPropertyDescriptor const&) = delete;

  /// @brief Field _index, offset: 0x98, size: 0x4, def value: None
  int32_t ____index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__ArrayConverter__ArrayPropertyDescriptor, 0xa0>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::__ArrayConverter__ArrayPropertyDescriptor, ____index) == 0x98, "Offset mismatch!");

} // namespace System::ComponentModel
// Type: System.ComponentModel::ArrayConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::ArrayConverter*
class CORDL_TYPE ArrayConverter : public ::System::ComponentModel::CollectionConverter {
public:
  // Declarations
  using ArrayPropertyDescriptor = ::System::ComponentModel::__ArrayConverter__ArrayPropertyDescriptor;

  /// @brief Method ConvertTo, addr 0x2e34e48, size 0x1cc, virtual true, abstract: false, final false
  inline ::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value,
                                     ::System::Type* destinationType);

  /// @brief Method GetProperties, addr 0x2e35014, size 0x1d4, virtual true, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value,
                                                                               ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method GetPropertiesSupported, addr 0x2e35390, size 0x8, virtual true, abstract: false, final false
  inline bool GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext* context);

  static inline ::System::ComponentModel::ArrayConverter* New_ctor();

  /// @brief Method .ctor, addr 0x2e35398, size 0x8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ArrayConverter, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ArrayConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ArrayConverter*, "System.ComponentModel", "ArrayConverter");
NEED_NO_BOX(::System::ComponentModel::__ArrayConverter__ArrayPropertyDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__ArrayConverter__ArrayPropertyDescriptor*, "System.ComponentModel", "ArrayConverter/ArrayPropertyDescriptor");
