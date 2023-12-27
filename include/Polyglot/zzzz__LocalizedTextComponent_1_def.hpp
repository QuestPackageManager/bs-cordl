#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LocalizedTextComponent_1)
namespace Polyglot {
struct LanguageDirection;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace Polyglot {
class ILocalize;
}
// Forward declare root types
namespace Polyglot {
template <typename T> class LocalizedTextComponent_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Polyglot::LocalizedTextComponent_1);
// Type: Polyglot::LocalizedTextComponent`1
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Polyglot {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15565))
// CS Name: ::Polyglot::LocalizedTextComponent`1<T>*
class CORDL_TYPE LocalizedTextComponent_1 : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field localizedComponent, offset 0x18, size 0x8
  __declspec(property(get = __get_localizedComponent, put = __set_localizedComponent)) T localizedComponent;

  /// @brief Field maintainTextAlignment, offset 0x20, size 0x1
  __declspec(property(get = __get_maintainTextAlignment, put = __set_maintainTextAlignment)) bool maintainTextAlignment;

  /// @brief Field key, offset 0x28, size 0x8
  __declspec(property(get = __get_key, put = __set_key))::StringW key;

  /// @brief Field parameters, offset 0x30, size 0x8
  __declspec(property(get = __get_parameters, put = __set_parameters))::System::Collections::Generic::List_1<::System::Object*>* parameters;

  __declspec(property(get = get_MaintainTextAlignment, put = set_MaintainTextAlignment)) bool MaintainTextAlignment;

  __declspec(property(get = get_Key, put = set_Key))::StringW Key;

  __declspec(property(get = get_Parameters))::System::Collections::Generic::List_1<::System::Object*>* Parameters;

  /// @brief Convert operator to "::Polyglot::ILocalize"
  constexpr operator ::Polyglot::ILocalize*() noexcept;

  constexpr T& __get_localizedComponent();

  constexpr T const& __get_localizedComponent() const;

  constexpr void __set_localizedComponent(T value);

  constexpr bool& __get_maintainTextAlignment();

  constexpr bool const& __get_maintainTextAlignment() const;

  constexpr void __set_maintainTextAlignment(bool value);

  constexpr ::StringW& __get_key();

  constexpr ::StringW const& __get_key() const;

  constexpr void __set_key(::StringW value);

  constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __get_parameters();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Object*>*> const& __get_parameters() const;

  constexpr void __set_parameters(::System::Collections::Generic::List_1<::System::Object*>* value);

  /// @brief Method get_MaintainTextAlignment addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool get_MaintainTextAlignment();

  /// @brief Method set_MaintainTextAlignment addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void set_MaintainTextAlignment(bool value);

  /// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::StringW get_Key();

  /// @brief Method set_Key addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void set_Key(::StringW value);

  /// @brief Method get_Parameters addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::System::Collections::Generic::List_1<::System::Object*>* get_Parameters();

  /// @brief Method OnEnable addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void OnEnable();

  /// @brief Method SetText addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void SetText(T component, ::StringW value);

  /// @brief Method UpdateAlignment addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void UpdateAlignment(T component, ::Polyglot::LanguageDirection direction);

  /// @brief Method OnLocalize addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void OnLocalize();

  /// @brief Method ClearParameters addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void ClearParameters();

  /// @brief Method AddParameter addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void AddParameter(::System::Object* parameter);

  /// @brief Method AddParameter addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void AddParameter(int32_t parameter);

  /// @brief Method AddParameter addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void AddParameter(float_t parameter);

  /// @brief Method AddParameter addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void AddParameter(::StringW parameter);

  static inline ::Polyglot::LocalizedTextComponent_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LocalizedTextComponent_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalizedTextComponent_1(LocalizedTextComponent_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalizedTextComponent_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalizedTextComponent_1(LocalizedTextComponent_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalizedTextComponent_1();

public:
  /// @brief Field localizedComponent, offset: 0x18, size: 0x8, def value: None
  T ___localizedComponent;

  /// @brief Field maintainTextAlignment, offset: 0x20, size: 0x1, def value: None
  bool ___maintainTextAlignment;

  /// @brief Field key, offset: 0x28, size: 0x8, def value: None
  ::StringW ___key;

  /// @brief Field parameters, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Object*>* ___parameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Polyglot
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Polyglot::LocalizedTextComponent_1, "Polyglot", "LocalizedTextComponent`1");
