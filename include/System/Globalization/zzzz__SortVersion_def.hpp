#pragma once
// IWYU pragma private; include "System/Globalization/SortVersion.hpp"
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
// Dependencies System.Guid, System.Object
namespace System::Globalization {
// Is value type: false
// CS Name: System.Globalization.SortVersion
class CORDL_TYPE SortVersion : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_NlsVersion, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NlsVersion, put = __cordl_internal_set_m_NlsVersion)) int32_t m_NlsVersion;

  /// @brief Field m_SortId, offset 0x14, size 0x10
  __declspec(property(get = __cordl_internal_get_m_SortId, put = __cordl_internal_set_m_SortId)) ::System::Guid m_SortId;

  constexpr int32_t const& __cordl_internal_get_m_NlsVersion() const;

  constexpr int32_t& __cordl_internal_get_m_NlsVersion();

  constexpr ::System::Guid const& __cordl_internal_get_m_SortId() const;

  constexpr ::System::Guid& __cordl_internal_get_m_SortId();

  constexpr void __cordl_internal_set_m_NlsVersion(int32_t value);

  constexpr void __cordl_internal_set_m_SortId(::System::Guid value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortVersion();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SortVersion", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortVersion(SortVersion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortVersion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortVersion(SortVersion const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3686 };

  /// @brief Field m_NlsVersion, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_NlsVersion;

  /// @brief Field m_SortId, offset: 0x14, size: 0x10, def value: None
  ::System::Guid ___m_SortId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Globalization::SortVersion, ___m_NlsVersion) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::SortVersion, ___m_SortId) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Globalization::SortVersion, 0x28>, "Size mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::SortVersion);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::SortVersion*, "System.Globalization", "SortVersion");
