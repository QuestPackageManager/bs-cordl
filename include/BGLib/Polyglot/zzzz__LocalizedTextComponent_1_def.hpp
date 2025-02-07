#pragma once
// IWYU pragma private; include "BGLib/Polyglot/LocalizedTextComponent_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/Polyglot/zzzz__ILocalize_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LocalizedTextComponent_1)
namespace BGLib::Polyglot {
struct LanguageDirection;
}
namespace BGLib::Polyglot {
class LocalizationModel;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace BGLib::Polyglot {
template <typename T> class LocalizedTextComponent_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::BGLib::Polyglot::LocalizedTextComponent_1);
// Dependencies BGLib.Polyglot.ILocalize, UnityEngine.MonoBehaviour
namespace BGLib::Polyglot {
// cpp template
template <typename T>
// Is value type: false
// CS Name: BGLib.Polyglot.LocalizedTextComponent`1<T>
class CORDL_TYPE LocalizedTextComponent_1 : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_Key, put = set_Key)) ::StringW Key;

  __declspec(property(get = get_MaintainTextAlignment)) bool MaintainTextAlignment;

  __declspec(property(get = get_Parameters)) ::System::Collections::Generic::List_1<::System::Object*>* Parameters;

  /// @brief Field key, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key)) ::StringW key;

  /// @brief Field localizedComponent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_localizedComponent, put = __cordl_internal_set_localizedComponent)) T localizedComponent;

  /// @brief Field maintainTextAlignment, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_maintainTextAlignment, put = __cordl_internal_set_maintainTextAlignment)) bool maintainTextAlignment;

  /// @brief Field parameters, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_parameters, put = __cordl_internal_set_parameters)) ::System::Collections::Generic::List_1<::System::Object*>* parameters;

  /// @brief Convert operator to "::BGLib::Polyglot::ILocalize"
  constexpr operator ::BGLib::Polyglot::ILocalize*() noexcept;

  /// @brief Method ClearParameters, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ClearParameters();

  static inline ::BGLib::Polyglot::LocalizedTextComponent_1<T>* New_ctor();

  /// @brief Method OnLocalize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void OnLocalize(::BGLib::Polyglot::LocalizationModel* localization);

  /// @brief Method SetText, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetText(T component, ::StringW value);

  /// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method UpdateAlignment, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateAlignment(T component, ::BGLib::Polyglot::LanguageDirection direction);

  constexpr ::StringW const& __cordl_internal_get_key() const;

  constexpr ::StringW& __cordl_internal_get_key();

  constexpr T const& __cordl_internal_get_localizedComponent() const;

  constexpr T& __cordl_internal_get_localizedComponent();

  constexpr bool const& __cordl_internal_get_maintainTextAlignment() const;

  constexpr bool& __cordl_internal_get_maintainTextAlignment();

  constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& __cordl_internal_get_parameters() const;

  constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get_parameters();

  constexpr void __cordl_internal_set_key(::StringW value);

  constexpr void __cordl_internal_set_localizedComponent(T value);

  constexpr void __cordl_internal_set_maintainTextAlignment(bool value);

  constexpr void __cordl_internal_set_parameters(::System::Collections::Generic::List_1<::System::Object*>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Key, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::StringW get_Key();

  /// @brief Method get_MaintainTextAlignment, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_MaintainTextAlignment();

  /// @brief Method get_Parameters, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::System::Object*>* get_Parameters();

  /// @brief Convert to "::BGLib::Polyglot::ILocalize"
  constexpr ::BGLib::Polyglot::ILocalize* i___BGLib__Polyglot__ILocalize() noexcept;

  /// @brief Method set_Key, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Key(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalizedTextComponent_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalizedTextComponent_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalizedTextComponent_1(LocalizedTextComponent_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalizedTextComponent_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalizedTextComponent_1(LocalizedTextComponent_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18058 };

  /// @brief Field localizedComponent, offset: 0x20, size: 0x8, def value: None
  T ___localizedComponent;

  /// @brief Field maintainTextAlignment, offset: 0x28, size: 0x1, def value: None
  bool ___maintainTextAlignment;

  /// @brief Field key, offset: 0x30, size: 0x8, def value: None
  ::StringW ___key;

  /// @brief Field parameters, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Object*>* ___parameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGLib::Polyglot
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BGLib::Polyglot::LocalizedTextComponent_1, "BGLib.Polyglot", "LocalizedTextComponent`1");
