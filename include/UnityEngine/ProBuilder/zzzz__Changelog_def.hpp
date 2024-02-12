#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Changelog)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace UnityEngine::ProBuilder {
class ChangelogEntry;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class Changelog;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Changelog);
// Type: UnityEngine.ProBuilder::Changelog
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12006))
// CS Name: ::UnityEngine.ProBuilder::Changelog*
class CORDL_TYPE Changelog : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Entries, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Entries, put = __cordl_internal_set_m_Entries))::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::ChangelogEntry*>* m_Entries;

  __declspec(property(get = get_entries))::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::ProBuilder::ChangelogEntry*>* entries;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::ChangelogEntry*>*& __cordl_internal_get_m_Entries();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::ChangelogEntry*>*> const& __cordl_internal_get_m_Entries() const;

  constexpr void __cordl_internal_set_m_Entries(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::ChangelogEntry*>* value);

  /// @brief Method get_entries, addr 0x2b3a888, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::ProBuilder::ChangelogEntry*>* get_entries();

  static inline ::UnityEngine::ProBuilder::Changelog* New_ctor(::StringW log);

  /// @brief Method .ctor, addr 0x2b3a904, size 0x30c, virtual false, abstract: false, final false
  inline void _ctor(::StringW log);

  /// @brief Method CreateEntry, addr 0x2b3ac10, size 0x170, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::ChangelogEntry* CreateEntry(::StringW version, ::StringW contents);

  // Ctor Parameters [CppParam { name: "", ty: "Changelog", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Changelog(Changelog&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Changelog", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Changelog(Changelog const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Changelog();

public:
  /// @brief Field m_Entries, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::ChangelogEntry*>* ___m_Entries;

  /// @brief Field k_ChangelogEntryPattern offset 0xffffffff size 0x8
  static constexpr ::ConstString k_ChangelogEntryPattern{ u"(##\\s\\[[0-9]+\\.[0-9]+\\.[0-9]+(\\-[a-zA-Z]+(\\.[0-9]+)*)*\\])" };

  /// @brief Field k_VersionInfoPattern offset 0xffffffff size 0x8
  static constexpr ::ConstString k_VersionInfoPattern{ u"(?<=##\\s\\[).*(?=\\])" };

  /// @brief Field k_VersionDatePattern offset 0xffffffff size 0x8
  static constexpr ::ConstString k_VersionDatePattern{ u"(?<=##\\s\\[.*\\]\\s-\\s)[0-9-]*" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Changelog, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Changelog, ___m_Entries) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::Changelog);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Changelog*, "UnityEngine.ProBuilder", "Changelog");
