#pragma once
// IWYU pragma private; include "System/Xml/XmlDictionaryReaderQuotaTypes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlDictionaryReaderQuotaTypes)
// Forward declare root types
namespace System::Xml {
struct XmlDictionaryReaderQuotaTypes;
}
// Write type traits
MARK_VAL_T(::System::Xml::XmlDictionaryReaderQuotaTypes);
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.XmlDictionaryReaderQuotaTypes
struct CORDL_TYPE XmlDictionaryReaderQuotaTypes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XmlDictionaryReaderQuotaTypes_Unwrapped
  enum struct __XmlDictionaryReaderQuotaTypes_Unwrapped : int32_t {
    __E_MaxDepth = static_cast<int32_t>(0x1),
    __E_MaxStringContentLength = static_cast<int32_t>(0x2),
    __E_MaxArrayLength = static_cast<int32_t>(0x4),
    __E_MaxBytesPerRead = static_cast<int32_t>(0x8),
    __E_MaxNameTableCharCount = static_cast<int32_t>(0x10),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XmlDictionaryReaderQuotaTypes_Unwrapped() const noexcept {
    return static_cast<__XmlDictionaryReaderQuotaTypes_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlDictionaryReaderQuotaTypes();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XmlDictionaryReaderQuotaTypes(int32_t value__) noexcept;

  /// @brief Field MaxArrayLength value: I32(4)
  static ::System::Xml::XmlDictionaryReaderQuotaTypes const MaxArrayLength;

  /// @brief Field MaxBytesPerRead value: I32(8)
  static ::System::Xml::XmlDictionaryReaderQuotaTypes const MaxBytesPerRead;

  /// @brief Field MaxDepth value: I32(1)
  static ::System::Xml::XmlDictionaryReaderQuotaTypes const MaxDepth;

  /// @brief Field MaxNameTableCharCount value: I32(16)
  static ::System::Xml::XmlDictionaryReaderQuotaTypes const MaxNameTableCharCount;

  /// @brief Field MaxStringContentLength value: I32(2)
  static ::System::Xml::XmlDictionaryReaderQuotaTypes const MaxStringContentLength;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16952 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlDictionaryReaderQuotaTypes, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlDictionaryReaderQuotaTypes, 0x4>, "Size mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlDictionaryReaderQuotaTypes, "System.Xml", "XmlDictionaryReaderQuotaTypes");
