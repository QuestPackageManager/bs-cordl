#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ListSettingsController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NamedIntListController)
namespace GlobalNamespace {
class __NamedIntListController__TextValuePair;
}
namespace System {
template <typename T> class Action_1;
}
namespace HMUI {
template <typename T> class IValueChanger_1;
}
// Forward declare root types
namespace GlobalNamespace {
class NamedIntListController;
}
namespace GlobalNamespace {
class __NamedIntListController__TextValuePair;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NamedIntListController);
MARK_REF_PTR_T(::GlobalNamespace::__NamedIntListController__TextValuePair);
// Type: ::TextValuePair
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16152))
// CS Name: ::NamedIntListController::TextValuePair*
class CORDL_TYPE __NamedIntListController__TextValuePair : public ::System::Object {
public:
  // Declarations
  /// @brief Field localizationKey, offset 0x10, size 0x8
  __declspec(property(get = __get_localizationKey, put = __set_localizationKey))::StringW localizationKey;

  /// @brief Field value, offset 0x18, size 0x4
  __declspec(property(get = __get_value, put = __set_value)) int32_t value;

  __declspec(property(get = get_localizedText))::StringW localizedText;

  constexpr ::StringW& __get_localizationKey();

  constexpr ::StringW const& __get_localizationKey() const;

  constexpr void __set_localizationKey(::StringW value);

  constexpr int32_t& __get_value();

  constexpr int32_t const& __get_value() const;

  constexpr void __set_value(int32_t value);

  /// @brief Method get_localizedText addr 0x23e5724 size 0xc virtual false final false
  inline ::StringW get_localizedText();

  static inline ::GlobalNamespace::__NamedIntListController__TextValuePair* New_ctor();

  /// @brief Method .ctor addr 0x23e5738 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__NamedIntListController__TextValuePair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NamedIntListController__TextValuePair(__NamedIntListController__TextValuePair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NamedIntListController__TextValuePair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NamedIntListController__TextValuePair(__NamedIntListController__TextValuePair const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NamedIntListController__TextValuePair();

public:
  /// @brief Field localizationKey, offset: 0x10, size: 0x8, def value: None
  ::StringW ___localizationKey;

  /// @brief Field value, offset: 0x18, size: 0x4, def value: None
  int32_t ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NamedIntListController__TextValuePair, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::NamedIntListController
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16149))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16153))
// CS Name: ::NamedIntListController*
class CORDL_TYPE NamedIntListController : public ::GlobalNamespace::ListSettingsController {
public:
  // Declarations
  using TextValuePair = ::GlobalNamespace::__NamedIntListController__TextValuePair;

  /// @brief Field _textValuePairs, offset 0x28, size 0x8
  __declspec(property(
      get = __get__textValuePairs,
      put = __set__textValuePairs))::ArrayW<::GlobalNamespace::__NamedIntListController__TextValuePair*, ::Array<::GlobalNamespace::__NamedIntListController__TextValuePair*>*> _textValuePairs;

  /// @brief Field _value, offset 0x30, size 0x4
  __declspec(property(get = __get__value, put = __set__value)) int32_t _value;

  /// @brief Field valueChangedEvent, offset 0x38, size 0x8
  __declspec(property(get = __get_valueChangedEvent, put = __set_valueChangedEvent))::System::Action_1<int32_t>* valueChangedEvent;

  /// @brief Convert operator to "::HMUI::IValueChanger_1<int32_t>"
  constexpr operator ::HMUI::IValueChanger_1<int32_t>*() noexcept;

  constexpr ::ArrayW<::GlobalNamespace::__NamedIntListController__TextValuePair*, ::Array<::GlobalNamespace::__NamedIntListController__TextValuePair*>*>& __get__textValuePairs();

  constexpr ::ArrayW<::GlobalNamespace::__NamedIntListController__TextValuePair*, ::Array<::GlobalNamespace::__NamedIntListController__TextValuePair*>*> const& __get__textValuePairs() const;

  constexpr void __set__textValuePairs(::ArrayW<::GlobalNamespace::__NamedIntListController__TextValuePair*, ::Array<::GlobalNamespace::__NamedIntListController__TextValuePair*>*> value);

  constexpr int32_t& __get__value();

  constexpr int32_t const& __get__value() const;

  constexpr void __set__value(int32_t value);

  constexpr ::System::Action_1<int32_t>*& __get_valueChangedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> const& __get_valueChangedEvent() const;

  constexpr void __set_valueChangedEvent(::System::Action_1<int32_t>* value);

  /// @brief Method add_valueChangedEvent addr 0x23e5484 size 0xb0 virtual true final true
  inline void add_valueChangedEvent(::System::Action_1<int32_t>* value);

  /// @brief Method remove_valueChangedEvent addr 0x23e5534 size 0xb0 virtual true final true
  inline void remove_valueChangedEvent(::System::Action_1<int32_t>* value);

  /// @brief Method InitValues addr 0x23e55e4 size 0x38 virtual false final false
  inline void InitValues(::ArrayW<::GlobalNamespace::__NamedIntListController__TextValuePair*, ::Array<::GlobalNamespace::__NamedIntListController__TextValuePair*>*> values);

  /// @brief Method SetValue addr 0x23e561c size 0x38 virtual false final false
  inline void SetValue(int32_t value);

  /// @brief Method GetInitValues addr 0x23e5654 size 0x74 virtual true final false
  inline bool GetInitValues(ByRef<int32_t> idx, ByRef<int32_t> numberOfElements);

  /// @brief Method ApplyValue addr 0x23e56c8 size 0x20 virtual true final false
  inline void ApplyValue(int32_t idx);

  /// @brief Method TextForValue addr 0x23e56e8 size 0x3c virtual true final false
  inline ::StringW TextForValue(int32_t idx);

  static inline ::GlobalNamespace::NamedIntListController* New_ctor();

  /// @brief Method .ctor addr 0x23e5730 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NamedIntListController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NamedIntListController(NamedIntListController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NamedIntListController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NamedIntListController(NamedIntListController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NamedIntListController();

public:
  /// @brief Field _textValuePairs, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__NamedIntListController__TextValuePair*, ::Array<::GlobalNamespace::__NamedIntListController__TextValuePair*>*> ____textValuePairs;

  /// @brief Field _value, offset: 0x30, size: 0x4, def value: None
  int32_t ____value;

  /// @brief Field valueChangedEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<int32_t>* ___valueChangedEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NamedIntListController, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NamedIntListController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NamedIntListController*, "", "NamedIntListController");
NEED_NO_BOX(::GlobalNamespace::__NamedIntListController__TextValuePair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NamedIntListController__TextValuePair*, "", "NamedIntListController/TextValuePair");
