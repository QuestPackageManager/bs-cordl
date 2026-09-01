#pragma once
// IWYU pragma private; include "GlobalNamespace\StringListSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StringListSO)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class StringListSO;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::StringListSO*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StringListSO*, "", "StringListSO");
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: StringListSO
class CORDL_TYPE StringListSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _strings, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__strings, put = __cordl_internal_set__strings)) ::ArrayW<::StringW> _strings;

  __declspec(property(get = get_strings)) ::System::Collections::Generic::IReadOnlyList_1<::StringW>* strings;

  static inline ::GlobalNamespace::StringListSO* New_ctor();

  constexpr ::ArrayW<::StringW> const& __cordl_internal_get__strings() const;

  constexpr ::ArrayW<::StringW>& __cordl_internal_get__strings();

  constexpr void __cordl_internal_set__strings(::ArrayW<::StringW> value);

  /// @brief Method .ctor, addr 0x3327ff8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_strings, addr 0x3327ff0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* get_strings();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringListSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StringListSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringListSO(StringListSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringListSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringListSO(StringListSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20782 };

  /// @brief Field _strings, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW> ____strings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StringListSO, ____strings) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StringListSO) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
