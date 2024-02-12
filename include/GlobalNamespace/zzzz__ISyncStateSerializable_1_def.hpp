#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ISyncStateSerializable_1)
namespace GlobalNamespace {
struct SyncStateId;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class ISyncStateSerializable_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::ISyncStateSerializable_1);
// Type: ::ISyncStateSerializable`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12869))
// CS Name: ::ISyncStateSerializable`1<T>*
class CORDL_TYPE ISyncStateSerializable_1 {
public:
  // Declarations
  __declspec(property(get = get_id, put = set_id))::GlobalNamespace::SyncStateId id;

  __declspec(property(get = get_time, put = set_time)) int64_t time;

  __declspec(property(get = get_state, put = set_state)) T state;

  /// @brief Method get_id, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::SyncStateId get_id();

  /// @brief Method set_id, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_id(::GlobalNamespace::SyncStateId value);

  /// @brief Method get_time, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int64_t get_time();

  /// @brief Method set_time, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_time(int64_t value);

  /// @brief Method get_state, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T get_state();

  /// @brief Method set_state, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_state(T value);

  // Ctor Parameters [CppParam { name: "", ty: "ISyncStateSerializable_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISyncStateSerializable_1(ISyncStateSerializable_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISyncStateSerializable_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISyncStateSerializable_1(ISyncStateSerializable_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ISyncStateSerializable_1, "", "ISyncStateSerializable`1");
