#pragma once
// IWYU pragma private; include "System/ComponentModel/ReferenceConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReferenceConverter)
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System::ComponentModel {
class ReferenceConverter_ReferenceComparer;
}
namespace System::ComponentModel {
class TypeConverter_StandardValuesCollection;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class ReferenceConverter;
}
namespace System::ComponentModel {
class ReferenceConverter_ReferenceComparer;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ReferenceConverter);
MARK_REF_PTR_T(::System::ComponentModel::ReferenceConverter_ReferenceComparer);
// Dependencies System.Collections.IComparer, System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.ReferenceConverter/ReferenceComparer
class CORDL_TYPE ReferenceConverter_ReferenceComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _converter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__converter, put = __cordl_internal_set__converter)) ::System::ComponentModel::ReferenceConverter* _converter;

  /// @brief Convert operator to "::System::Collections::IComparer"
  constexpr operator ::System::Collections::IComparer*() noexcept;

  /// @brief Method Compare, addr 0x445e3a0, size 0xb8, virtual true, abstract: false, final true
  inline int32_t Compare(::System::Object* item1, ::System::Object* item2);

  static inline ::System::ComponentModel::ReferenceConverter_ReferenceComparer* New_ctor(::System::ComponentModel::ReferenceConverter* converter);

  constexpr ::System::ComponentModel::ReferenceConverter* const& __cordl_internal_get__converter() const;

  constexpr ::System::ComponentModel::ReferenceConverter*& __cordl_internal_get__converter();

  constexpr void __cordl_internal_set__converter(::System::ComponentModel::ReferenceConverter* value);

  /// @brief Method .ctor, addr 0x445e300, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::ReferenceConverter* converter);

  /// @brief Convert to "::System::Collections::IComparer"
  constexpr ::System::Collections::IComparer* i___System__Collections__IComparer() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReferenceConverter_ReferenceComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReferenceConverter_ReferenceComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReferenceConverter_ReferenceComparer(ReferenceConverter_ReferenceComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReferenceConverter_ReferenceComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReferenceConverter_ReferenceComparer(ReferenceConverter_ReferenceComparer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9412 };

  /// @brief Field _converter, offset: 0x10, size: 0x8, def value: None
  ::System::ComponentModel::ReferenceConverter* ____converter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::ReferenceConverter_ReferenceComparer, ____converter) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ReferenceConverter_ReferenceComparer, 0x18>, "Size mismatch!");

} // namespace System::ComponentModel
// Dependencies System.ComponentModel.TypeConverter
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.ReferenceConverter
class CORDL_TYPE ReferenceConverter : public ::System::ComponentModel::TypeConverter {
public:
  // Declarations
  using ReferenceComparer = ::System::ComponentModel::ReferenceConverter_ReferenceComparer;

  /// @brief Field _type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__type, put = __cordl_internal_set__type)) ::System::Type* _type;

  /// @brief Field s_none, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_none, put = setStaticF_s_none)) ::StringW s_none;

  /// @brief Method CanConvertFrom, addr 0x445d2b4, size 0xcc, virtual true, abstract: false, final false
  inline bool CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType);

  /// @brief Method ConvertFrom, addr 0x445d380, size 0x348, virtual true, abstract: false, final false
  inline ::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value);

  /// @brief Method ConvertTo, addr 0x445d6c8, size 0x450, virtual true, abstract: false, final false
  inline ::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value,
                                     ::System::Type* destinationType);

  /// @brief Method GetStandardValues, addr 0x445db18, size 0x7e8, virtual true, abstract: false, final false
  inline ::System::ComponentModel::TypeConverter_StandardValuesCollection* GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method GetStandardValuesExclusive, addr 0x445e328, size 0x8, virtual true, abstract: false, final false
  inline bool GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method GetStandardValuesSupported, addr 0x445e330, size 0x8, virtual true, abstract: false, final false
  inline bool GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method IsValueAllowed, addr 0x445e338, size 0x8, virtual true, abstract: false, final false
  inline bool IsValueAllowed(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value);

  static inline ::System::ComponentModel::ReferenceConverter* New_ctor(::System::Type* type);

  constexpr ::System::Type* const& __cordl_internal_get__type() const;

  constexpr ::System::Type*& __cordl_internal_get__type();

  constexpr void __cordl_internal_set__type(::System::Type* value);

  /// @brief Method .ctor, addr 0x445d28c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

  static inline ::StringW getStaticF_s_none();

  static inline void setStaticF_s_none(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReferenceConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReferenceConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReferenceConverter(ReferenceConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReferenceConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReferenceConverter(ReferenceConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9413 };

  /// @brief Field _type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::ReferenceConverter, ____type) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ReferenceConverter, 0x18>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ReferenceConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ReferenceConverter*, "System.ComponentModel", "ReferenceConverter");
NEED_NO_BOX(::System::ComponentModel::ReferenceConverter_ReferenceComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ReferenceConverter_ReferenceComparer*, "System.ComponentModel", "ReferenceConverter/ReferenceComparer");
