#pragma once
// IWYU pragma private; include "System/Data/OperatorInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__Nodes_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OperatorInfo)
namespace System::Data {
struct Nodes;
}
// Forward declare root types
namespace System::Data {
class OperatorInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::OperatorInfo);
// Type: System.Data::OperatorInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::OperatorInfo*
class CORDL_TYPE OperatorInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field _op, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__op, put = __cordl_internal_set__op)) int32_t _op;

  /// @brief Field _priority, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__priority, put = __cordl_internal_set__priority)) int32_t _priority;

  /// @brief Field _type, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__type, put = __cordl_internal_set__type)) ::System::Data::Nodes _type;

  static inline ::System::Data::OperatorInfo* New_ctor(::System::Data::Nodes type, int32_t op, int32_t pri);

  constexpr int32_t const& __cordl_internal_get__op() const;

  constexpr int32_t& __cordl_internal_get__op();

  constexpr int32_t const& __cordl_internal_get__priority() const;

  constexpr int32_t& __cordl_internal_get__priority();

  constexpr ::System::Data::Nodes const& __cordl_internal_get__type() const;

  constexpr ::System::Data::Nodes& __cordl_internal_get__type();

  constexpr void __cordl_internal_set__op(int32_t value);

  constexpr void __cordl_internal_set__priority(int32_t value);

  constexpr void __cordl_internal_set__type(::System::Data::Nodes value);

  /// @brief Method .ctor, addr 0x4117874, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::Nodes type, int32_t op, int32_t pri);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OperatorInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OperatorInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OperatorInfo(OperatorInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OperatorInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OperatorInfo(OperatorInfo const&) = delete;

  /// @brief Field _type, offset: 0x10, size: 0x4, def value: None
  ::System::Data::Nodes ____type;

  /// @brief Field _op, offset: 0x14, size: 0x4, def value: None
  int32_t ____op;

  /// @brief Field _priority, offset: 0x18, size: 0x4, def value: None
  int32_t ____priority;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11393 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::OperatorInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Data::OperatorInfo, ____type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::OperatorInfo, ____op) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Data::OperatorInfo, ____priority) == 0x18, "Offset mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::OperatorInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::OperatorInfo*, "System.Data", "OperatorInfo");
