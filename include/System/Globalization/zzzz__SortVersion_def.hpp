#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SortVersion)
// Forward declare root types
namespace System::Globalization {
class SortVersion;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::SortVersion);
// Type: System.Globalization::SortVersion
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2406)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3680))
// CS Name: ::System.Globalization::SortVersion*
class CORDL_TYPE SortVersion : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_NlsVersion, offset 0x10, size 0x4
  __declspec(property(get = __get_m_NlsVersion, put = __set_m_NlsVersion)) int32_t m_NlsVersion;

  /// @brief Field m_SortId, offset 0x14, size 0x10
  __declspec(property(get = __get_m_SortId, put = __set_m_SortId))::System::Guid m_SortId;

  constexpr int32_t& __get_m_NlsVersion();

  constexpr int32_t const& __get_m_NlsVersion() const;

  constexpr void __set_m_NlsVersion(int32_t value);

  constexpr ::System::Guid& __get_m_SortId();

  constexpr ::System::Guid const& __get_m_SortId() const;

  constexpr void __set_m_SortId(::System::Guid value);

  // Ctor Parameters [CppParam { name: "", ty: "SortVersion", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortVersion(SortVersion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortVersion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortVersion(SortVersion const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortVersion();

public:
  /// @brief Field m_NlsVersion, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_NlsVersion;

  /// @brief Field m_SortId, offset: 0x14, size: 0x10, def value: None
  ::System::Guid ___m_SortId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::SortVersion, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Globalization::SortVersion, ___m_NlsVersion) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::SortVersion, ___m_SortId) == 0x14, "Offset mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::SortVersion);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::SortVersion*, "System.Globalization", "SortVersion");
