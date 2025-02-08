#pragma once
// IWYU pragma private; include "GlobalNamespace/StringListSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StringListSO)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class StringListSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StringListSO);
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: StringListSO
class CORDL_TYPE StringListSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _strings, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__strings, put = __cordl_internal_set__strings)) ::ArrayW<::StringW, ::Array<::StringW>*> _strings;

  __declspec(property(get = get_strings)) ::System::Collections::Generic::IReadOnlyList_1<::StringW>* strings;

  static inline ::GlobalNamespace::StringListSO* New_ctor();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__strings() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__strings();

  constexpr void __cordl_internal_set__strings(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method .ctor, addr 0x22b68e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_strings, addr 0x22b68d8, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17153 };

  /// @brief Field _strings, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____strings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StringListSO, ____strings) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StringListSO, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StringListSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StringListSO*, "", "StringListSO");
