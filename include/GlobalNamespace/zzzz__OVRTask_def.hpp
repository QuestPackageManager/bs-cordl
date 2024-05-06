#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OVRTask)
namespace GlobalNamespace {
template <typename TResult> struct OVRTask_1;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRTask;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRTask);
// Type: ::OVRTask
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRTask*
class CORDL_TYPE OVRTask : public ::System::Object {
public:
  // Declarations
  /// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TResult> static inline ::GlobalNamespace::OVRTask_1<TResult> Create(::System::Guid id);

  /// @brief Method FromGuid, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TResult> static inline ::GlobalNamespace::OVRTask_1<TResult> FromGuid(::System::Guid id);

  /// @brief Method FromRequest, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TResult> static inline ::GlobalNamespace::OVRTask_1<TResult> FromRequest(uint64_t id);

  /// @brief Method FromResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TResult> static inline ::GlobalNamespace::OVRTask_1<TResult> FromResult(TResult result);

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TResult> static inline ::GlobalNamespace::OVRTask_1<TResult> Get(::System::Guid id);

  /// @brief Method GetExisting, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TResult> static inline ::GlobalNamespace::OVRTask_1<TResult> GetExisting(::System::Guid id);

  /// @brief Method GetExisting, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TResult> static inline ::GlobalNamespace::OVRTask_1<TResult> GetExisting(uint64_t id);

  /// @brief Method GetId, addr 0x2b76d48, size 0x30, virtual false, abstract: false, final false
  static inline ::System::Guid GetId(uint64_t value);

  /// @brief Method SetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TResult> static inline void SetResult(::System::Guid id, TResult result);

  /// @brief Method SetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TResult> static inline void SetResult(uint64_t id, TResult result);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTask();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRTask", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRTask(OVRTask&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRTask", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRTask(OVRTask const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTask, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRTask);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTask*, "", "OVRTask");
