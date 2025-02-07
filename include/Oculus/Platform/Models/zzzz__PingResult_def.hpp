#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/PingResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PingResult)
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class PingResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::PingResult);
// Dependencies System.Nullable`1<T>, System.Object
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.PingResult
class CORDL_TYPE PingResult : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsTimeout)) bool IsTimeout;

  __declspec(property(get = get_PingTimeUsec)) uint64_t PingTimeUsec;

  /// @brief Field <ID>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ID_k__BackingField, put = __cordl_internal_set__ID_k__BackingField)) uint64_t _ID_k__BackingField;

  __declspec(property(get = get_ID, put = set_ID)) uint64_t _cordl_ID;

  /// @brief Field pingTimeUsec, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_pingTimeUsec, put = __cordl_internal_set_pingTimeUsec)) ::System::Nullable_1<uint64_t> pingTimeUsec;

  static inline ::Oculus::Platform::Models::PingResult* New_ctor(uint64_t id, ::System::Nullable_1<uint64_t> pingTimeUsec);

  constexpr uint64_t const& __cordl_internal_get__ID_k__BackingField() const;

  constexpr uint64_t& __cordl_internal_get__ID_k__BackingField();

  constexpr ::System::Nullable_1<uint64_t> const& __cordl_internal_get_pingTimeUsec() const;

  constexpr ::System::Nullable_1<uint64_t>& __cordl_internal_get_pingTimeUsec();

  constexpr void __cordl_internal_set__ID_k__BackingField(uint64_t value);

  constexpr void __cordl_internal_set_pingTimeUsec(::System::Nullable_1<uint64_t> value);

  /// @brief Method .ctor, addr 0x3f979f0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(uint64_t id, ::System::Nullable_1<uint64_t> pingTimeUsec);

  /// @brief Method get_ID, addr 0x3f97a2c, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_ID();

  /// @brief Method get_IsTimeout, addr 0x3f97aa8, size 0x44, virtual false, abstract: false, final false
  inline bool get_IsTimeout();

  /// @brief Method get_PingTimeUsec, addr 0x3f97a3c, size 0x6c, virtual false, abstract: false, final false
  inline uint64_t get_PingTimeUsec();

  /// @brief Method set_ID, addr 0x3f97a34, size 0x8, virtual false, abstract: false, final false
  inline void set_ID(uint64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PingResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PingResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PingResult(PingResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PingResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PingResult(PingResult const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15557 };

  /// @brief Field <ID>k__BackingField, offset: 0x10, size: 0x8, def value: None
  uint64_t ____ID_k__BackingField;

  /// @brief Field pingTimeUsec, offset: 0x18, size: 0x10, def value: None
  ::System::Nullable_1<uint64_t> ___pingTimeUsec;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::PingResult, ____ID_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::PingResult, ___pingTimeUsec) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::PingResult, 0x28>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::PingResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::PingResult*, "Oculus.Platform.Models", "PingResult");
