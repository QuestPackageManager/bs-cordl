#pragma once
// IWYU pragma private; include "System/Xml/Schema/StateUnion.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StateUnion)
// Forward declare root types
namespace System::Xml::Schema {
struct StateUnion;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::StateUnion);
// Dependencies
namespace System::Xml::Schema {
// Is value type: true
// CS Name: System.Xml.Schema.StateUnion
struct CORDL_TYPE StateUnion {
public:
  // Declarations
  /// @brief Field AllElementsRequired, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_AllElementsRequired, put = __cordl_internal_set_AllElementsRequired)) int32_t AllElementsRequired;

  /// @brief Field CurPosIndex, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_CurPosIndex, put = __cordl_internal_set_CurPosIndex)) int32_t CurPosIndex;

  /// @brief Field NumberOfRunningPos, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_NumberOfRunningPos, put = __cordl_internal_set_NumberOfRunningPos)) int32_t NumberOfRunningPos;

  /// @brief Field State, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_State, put = __cordl_internal_set_State)) int32_t State;

  constexpr int32_t const& __cordl_internal_get_AllElementsRequired() const;

  constexpr int32_t& __cordl_internal_get_AllElementsRequired();

  constexpr int32_t const& __cordl_internal_get_CurPosIndex() const;

  constexpr int32_t& __cordl_internal_get_CurPosIndex();

  constexpr int32_t const& __cordl_internal_get_NumberOfRunningPos() const;

  constexpr int32_t& __cordl_internal_get_NumberOfRunningPos();

  constexpr int32_t const& __cordl_internal_get_State() const;

  constexpr int32_t& __cordl_internal_get_State();

  constexpr void __cordl_internal_set_AllElementsRequired(int32_t value);

  constexpr void __cordl_internal_set_CurPosIndex(int32_t value);

  constexpr void __cordl_internal_set_NumberOfRunningPos(int32_t value);

  constexpr void __cordl_internal_set_State(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr StateUnion();

  // Ctor Parameters [CppParam { name: "State", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "AllElementsRequired", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "CurPosIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "NumberOfRunningPos", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StateUnion(int32_t State, int32_t AllElementsRequired, int32_t CurPosIndex, int32_t NumberOfRunningPos) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___State_padding[0x0];
      /// @brief Field State, offset: 0x0, size: 0x4, def value: None
      int32_t ___State;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___State_padding_forAlignment[0x0];
      /// @brief Field State, offset: 0x0, size: 0x4, def value: None
      int32_t ___State_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___AllElementsRequired_padding[0x0];
      /// @brief Field AllElementsRequired, offset: 0x0, size: 0x4, def value: None
      int32_t ___AllElementsRequired;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___AllElementsRequired_padding_forAlignment[0x0];
      /// @brief Field AllElementsRequired, offset: 0x0, size: 0x4, def value: None
      int32_t ___AllElementsRequired_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___CurPosIndex_padding[0x0];
      /// @brief Field CurPosIndex, offset: 0x0, size: 0x4, def value: None
      int32_t ___CurPosIndex;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___CurPosIndex_padding_forAlignment[0x0];
      /// @brief Field CurPosIndex, offset: 0x0, size: 0x4, def value: None
      int32_t ___CurPosIndex_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___NumberOfRunningPos_padding[0x0];
      /// @brief Field NumberOfRunningPos, offset: 0x0, size: 0x4, def value: None
      int32_t ___NumberOfRunningPos;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___NumberOfRunningPos_padding_forAlignment[0x0];
      /// @brief Field NumberOfRunningPos, offset: 0x0, size: 0x4, def value: None
      int32_t ___NumberOfRunningPos_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7632 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::StateUnion, 0x4>, "Size mismatch!");

} // namespace System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::StateUnion, "System.Xml.Schema", "StateUnion");
