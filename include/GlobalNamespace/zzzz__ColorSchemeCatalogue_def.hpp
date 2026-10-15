#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorSchemeCatalogue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ColorSchemeCatalogue)
namespace GlobalNamespace {
class ColorSchemeCatalogue___c;
}
namespace GlobalNamespace {
class ColorSchemeSO;
}
namespace GlobalNamespace {
class ColorScheme;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorSchemeCatalogue;
}
namespace GlobalNamespace {
class ColorSchemeCatalogue___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ColorSchemeCatalogue*);
MARK_REF_T(::GlobalNamespace::ColorSchemeCatalogue___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ColorSchemeCatalogue*, "", "ColorSchemeCatalogue");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ColorSchemeCatalogue___c*, "", "ColorSchemeCatalogue/<>c");
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ColorSchemeCatalogue/<>c
class CORDL_TYPE ColorSchemeCatalogue___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::ColorSchemeCatalogue___c* __9;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0)) ::System::Func_2<::UnityW<::GlobalNamespace::ColorSchemeSO>, ::GlobalNamespace::ColorScheme*>* __9__2_0;

  static inline ::GlobalNamespace::ColorSchemeCatalogue___c* New_ctor();

  /// @brief Method <.ctor>b__2_0, addr 0x39f847c, size 0x14, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorScheme* __ctor_b__2_0(::GlobalNamespace::ColorSchemeSO* colorSchemeSO);

  /// @brief Method .ctor, addr 0x39f8478, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::ColorSchemeCatalogue___c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::ColorSchemeSO>, ::GlobalNamespace::ColorScheme*>* getStaticF___9__2_0();

  static inline void setStaticF___9(::GlobalNamespace::ColorSchemeCatalogue___c* value);

  static inline void setStaticF___9__2_0(::System::Func_2<::UnityW<::GlobalNamespace::ColorSchemeSO>, ::GlobalNamespace::ColorScheme*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorSchemeCatalogue___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemeCatalogue___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorSchemeCatalogue___c(ColorSchemeCatalogue___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemeCatalogue___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorSchemeCatalogue___c(ColorSchemeCatalogue___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14625 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ColorSchemeCatalogue___c) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ColorSchemeCatalogue
class CORDL_TYPE ColorSchemeCatalogue : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::ColorSchemeCatalogue___c;

  /// @brief Field _colorSchemesById, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__colorSchemesById,
                      put = __cordl_internal_set__colorSchemesById)) ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ColorScheme*>* _colorSchemesById;

  static inline ::GlobalNamespace::ColorSchemeCatalogue* New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::ColorSchemeSO>>* colorSchemeSOs);

  static inline ::GlobalNamespace::ColorSchemeCatalogue* New_ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ColorScheme*>* colorSchemes);

  /// @brief Method TryGetColorSchemeForId, addr 0x39f8394, size 0x90, virtual false, abstract: false, final false
  inline bool TryGetColorSchemeForId(::StringW colorSchemeId, ::by_ref<::GlobalNamespace::ColorScheme*> colorScheme);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ColorScheme*>* const& __cordl_internal_get__colorSchemesById() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ColorScheme*>*& __cordl_internal_get__colorSchemesById();

  constexpr void __cordl_internal_set__colorSchemesById(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ColorScheme*>* value);

  /// @brief Method .ctor, addr 0x39f8284, size 0x110, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::ColorSchemeSO>>* colorSchemeSOs);

  /// @brief Method .ctor, addr 0x39f7f20, size 0x364, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ColorScheme*>* colorSchemes);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorSchemeCatalogue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemeCatalogue", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorSchemeCatalogue(ColorSchemeCatalogue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemeCatalogue", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorSchemeCatalogue(ColorSchemeCatalogue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14626 };

  /// @brief Field _colorSchemesById, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ColorScheme*>* ____colorSchemesById;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ColorSchemeCatalogue, ____colorSchemesById) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ColorSchemeCatalogue) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
