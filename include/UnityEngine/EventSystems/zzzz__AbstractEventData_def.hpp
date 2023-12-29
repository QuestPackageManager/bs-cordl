#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AbstractEventData)
// Forward declare root types
namespace UnityEngine::EventSystems {
class AbstractEventData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::AbstractEventData);
// Type: UnityEngine.EventSystems::AbstractEventData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13169))
// CS Name: ::UnityEngine.EventSystems::AbstractEventData*
class CORDL_TYPE AbstractEventData : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Used, offset 0x10, size 0x1
  __declspec(property(get = __get_m_Used, put = __set_m_Used)) bool m_Used;

  __declspec(property(get = get_used)) bool used;

  constexpr bool& __get_m_Used();

  constexpr bool const& __get_m_Used() const;

  constexpr void __set_m_Used(bool value);

  /// @brief Method Reset addr 0x2c2d078 size 0x8 virtual true final false
  inline void Reset();

  /// @brief Method Use addr 0x2c2d080 size 0xc virtual true final false
  inline void Use();

  /// @brief Method get_used addr 0x2c2d08c size 0x8 virtual true final false
  inline bool get_used();

  static inline ::UnityEngine::EventSystems::AbstractEventData* New_ctor();

  /// @brief Method .ctor addr 0x2c2d094 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AbstractEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AbstractEventData(AbstractEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AbstractEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AbstractEventData(AbstractEventData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AbstractEventData();

public:
  /// @brief Field m_Used, offset: 0x10, size: 0x1, def value: None
  bool ___m_Used;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::AbstractEventData, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::AbstractEventData, ___m_Used) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::AbstractEventData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::AbstractEventData*, "UnityEngine.EventSystems", "AbstractEventData");
