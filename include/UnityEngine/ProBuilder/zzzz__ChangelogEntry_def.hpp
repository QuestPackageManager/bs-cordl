#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ChangelogEntry)
namespace UnityEngine::ProBuilder {
class SemVer;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class ChangelogEntry;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::ChangelogEntry);
// Type: UnityEngine.ProBuilder::ChangelogEntry
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12005))
// CS Name: ::UnityEngine.ProBuilder::ChangelogEntry*
class CORDL_TYPE ChangelogEntry : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_VersionInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VersionInfo, put = __cordl_internal_set_m_VersionInfo))::UnityEngine::ProBuilder::SemVer* m_VersionInfo;

  /// @brief Field m_ReleaseNotes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ReleaseNotes, put = __cordl_internal_set_m_ReleaseNotes))::StringW m_ReleaseNotes;

  __declspec(property(get = get_versionInfo))::UnityEngine::ProBuilder::SemVer* versionInfo;

  __declspec(property(get = get_releaseNotes))::StringW releaseNotes;

  constexpr ::UnityEngine::ProBuilder::SemVer*& __cordl_internal_get_m_VersionInfo();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::SemVer*> const& __cordl_internal_get_m_VersionInfo() const;

  constexpr void __cordl_internal_set_m_VersionInfo(::UnityEngine::ProBuilder::SemVer* value);

  constexpr ::StringW& __cordl_internal_get_m_ReleaseNotes();

  constexpr ::StringW const& __cordl_internal_get_m_ReleaseNotes() const;

  constexpr void __cordl_internal_set_m_ReleaseNotes(::StringW value);

  /// @brief Method get_versionInfo, addr 0x2b3a7e8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::SemVer* get_versionInfo();

  /// @brief Method get_releaseNotes, addr 0x2b3a7f0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_releaseNotes();

  static inline ::UnityEngine::ProBuilder::ChangelogEntry* New_ctor(::UnityEngine::ProBuilder::SemVer* version, ::StringW releaseNotes);

  /// @brief Method .ctor, addr 0x2b3a7f8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ProBuilder::SemVer* version, ::StringW releaseNotes);

  /// @brief Method ToString, addr 0x2b3a824, size 0x64, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "ChangelogEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChangelogEntry(ChangelogEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChangelogEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChangelogEntry(ChangelogEntry const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChangelogEntry();

public:
  /// @brief Field m_VersionInfo, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::SemVer* ___m_VersionInfo;

  /// @brief Field m_ReleaseNotes, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_ReleaseNotes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::ChangelogEntry, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ChangelogEntry, ___m_VersionInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ChangelogEntry, ___m_ReleaseNotes) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::ChangelogEntry);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ChangelogEntry*, "UnityEngine.ProBuilder", "ChangelogEntry");
