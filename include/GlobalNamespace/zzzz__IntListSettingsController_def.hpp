#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ListSettingsController_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IntListSettingsController)
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class IntListSettingsController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IntListSettingsController);
// Type: ::IntListSettingsController
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16149))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5596))
// CS Name: ::IntListSettingsController*
class CORDL_TYPE IntListSettingsController : public ::GlobalNamespace::ListSettingsController {
public:
  // Declarations
  /// @brief Field _customNumberOfElements, offset 0x28, size 0x4
  __declspec(property(get = __get__customNumberOfElements, put = __set__customNumberOfElements)) int32_t _customNumberOfElements;

  /// @brief Field _customIndex, offset 0x2c, size 0x4
  __declspec(property(get = __get__customIndex, put = __set__customIndex)) int32_t _customIndex;

  /// @brief Field valueChangedEvent, offset 0x30, size 0x8
  __declspec(property(get = __get_valueChangedEvent, put = __set_valueChangedEvent))::System::Action_1<int32_t>* valueChangedEvent;

  constexpr int32_t& __get__customNumberOfElements();

  constexpr int32_t const& __get__customNumberOfElements() const;

  constexpr void __set__customNumberOfElements(int32_t value);

  constexpr int32_t& __get__customIndex();

  constexpr int32_t const& __get__customIndex() const;

  constexpr void __set__customIndex(int32_t value);

  constexpr ::System::Action_1<int32_t>*& __get_valueChangedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> const& __get_valueChangedEvent() const;

  constexpr void __set_valueChangedEvent(::System::Action_1<int32_t>* value);

  /// @brief Method add_valueChangedEvent addr 0x22aac88 size 0xb0 virtual false final false
  inline void add_valueChangedEvent(::System::Action_1<int32_t>* value);

  /// @brief Method remove_valueChangedEvent addr 0x22aad38 size 0xb0 virtual false final false
  inline void remove_valueChangedEvent(::System::Action_1<int32_t>* value);

  /// @brief Method InitValues addr 0x22aade8 size 0x20 virtual false final false
  inline void InitValues(int32_t numberOfElements, int32_t index);

  /// @brief Method GetInitValues addr 0x22aae08 size 0x18 virtual true final false
  inline bool GetInitValues(ByRef<int32_t> idx, ByRef<int32_t> numberOfElements);

  /// @brief Method ApplyValue addr 0x22aae20 size 0x20 virtual true final false
  inline void ApplyValue(int32_t idx);

  /// @brief Method TextForValue addr 0x22aae40 size 0x1c virtual true final false
  inline ::StringW TextForValue(int32_t idx);

  static inline ::GlobalNamespace::IntListSettingsController* New_ctor();

  /// @brief Method .ctor addr 0x22aae5c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "IntListSettingsController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntListSettingsController(IntListSettingsController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntListSettingsController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntListSettingsController(IntListSettingsController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntListSettingsController();

public:
  /// @brief Field _customNumberOfElements, offset: 0x28, size: 0x4, def value: None
  int32_t ____customNumberOfElements;

  /// @brief Field _customIndex, offset: 0x2c, size: 0x4, def value: None
  int32_t ____customIndex;

  /// @brief Field valueChangedEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<int32_t>* ___valueChangedEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::IntListSettingsController, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IntListSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IntListSettingsController*, "", "IntListSettingsController");
