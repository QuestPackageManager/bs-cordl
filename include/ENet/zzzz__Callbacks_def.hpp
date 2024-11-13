#pragma once
// IWYU pragma private; include "ENet/Callbacks.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ENet/zzzz__ENetCallbacks_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Callbacks)
namespace ENet {
class AllocCallback;
}
namespace ENet {
struct ENetCallbacks;
}
namespace ENet {
class FreeCallback;
}
namespace ENet {
class NoMemoryCallback;
}
// Forward declare root types
namespace ENet {
class Callbacks;
}
// Write type traits
MARK_REF_PTR_T(::ENet::Callbacks);
// Type: ENet::Callbacks
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace ENet {
// Is value type: false
// CS Name: ::ENet::Callbacks*
class CORDL_TYPE Callbacks : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_NativeData, put = set_NativeData)) ::ENet::ENetCallbacks NativeData;

  /// @brief Field nativeCallbacks, offset 0x10, size 0x18
  __declspec(property(get = __cordl_internal_get_nativeCallbacks, put = __cordl_internal_set_nativeCallbacks)) ::ENet::ENetCallbacks nativeCallbacks;

  static inline ::ENet::Callbacks* New_ctor(::ENet::AllocCallback* allocCallback, ::ENet::FreeCallback* freeCallback, ::ENet::NoMemoryCallback* noMemoryCallback);

  constexpr ::ENet::ENetCallbacks const& __cordl_internal_get_nativeCallbacks() const;

  constexpr ::ENet::ENetCallbacks& __cordl_internal_get_nativeCallbacks();

  constexpr void __cordl_internal_set_nativeCallbacks(::ENet::ENetCallbacks value);

  /// @brief Method .ctor, addr 0x3a4d2f0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::ENet::AllocCallback* allocCallback, ::ENet::FreeCallback* freeCallback, ::ENet::NoMemoryCallback* noMemoryCallback);

  /// @brief Method get_NativeData, addr 0x3a4d2c8, size 0x14, virtual false, abstract: false, final false
  inline ::ENet::ENetCallbacks get_NativeData();

  /// @brief Method set_NativeData, addr 0x3a4d2dc, size 0x14, virtual false, abstract: false, final false
  inline void set_NativeData(::ENet::ENetCallbacks value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Callbacks();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Callbacks", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Callbacks(Callbacks&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Callbacks", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Callbacks(Callbacks const&) = delete;

  /// @brief Field nativeCallbacks, offset: 0x10, size: 0x18, def value: None
  ::ENet::ENetCallbacks ___nativeCallbacks;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17699 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ENet::Callbacks, 0x28>, "Size mismatch!");

static_assert(offsetof(::ENet::Callbacks, ___nativeCallbacks) == 0x10, "Offset mismatch!");

} // namespace ENet
NEED_NO_BOX(::ENet::Callbacks);
DEFINE_IL2CPP_ARG_TYPE(::ENet::Callbacks*, "ENet", "Callbacks");
