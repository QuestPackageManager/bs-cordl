#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SubsystemWithProvider)
namespace UnityEngine::SubsystemsImplementation {
class SubsystemProvider;
}
namespace UnityEngine {
class ISubsystem;
}
// Forward declare root types
namespace UnityEngine::SubsystemsImplementation {
class SubsystemWithProvider;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SubsystemsImplementation::SubsystemWithProvider);
// Type: UnityEngine.SubsystemsImplementation::SubsystemWithProvider
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::SubsystemsImplementation {
// Is value type: false
// CS Name: ::UnityEngine.SubsystemsImplementation::SubsystemWithProvider*
class CORDL_TYPE SubsystemWithProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field <providerBase>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__providerBase_k__BackingField,
                      put = __cordl_internal_set__providerBase_k__BackingField))::UnityEngine::SubsystemsImplementation::SubsystemProvider* _providerBase_k__BackingField;

  /// @brief Field <running>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__running_k__BackingField, put = __cordl_internal_set__running_k__BackingField)) bool _running_k__BackingField;

  __declspec(property(get = get_providerBase))::UnityEngine::SubsystemsImplementation::SubsystemProvider* providerBase;

  __declspec(property(get = get_running, put = set_running)) bool running;

  /// @brief Convert operator to "::UnityEngine::ISubsystem"
  constexpr operator ::UnityEngine::ISubsystem*() noexcept;

  /// @brief Method Destroy, addr 0x3269d48, size 0x7c, virtual true, abstract: false, final true
  inline void Destroy();

  static inline ::UnityEngine::SubsystemsImplementation::SubsystemWithProvider* New_ctor();

  /// @brief Method OnDestroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnDestroy();

  /// @brief Method OnStart, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnStart();

  /// @brief Method OnStop, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnStop();

  /// @brief Method Start, addr 0x3269cd4, size 0x3c, virtual true, abstract: false, final true
  inline void Start();

  /// @brief Method Stop, addr 0x3269d10, size 0x38, virtual true, abstract: false, final true
  inline void Stop();

  constexpr ::UnityEngine::SubsystemsImplementation::SubsystemProvider*& __cordl_internal_get__providerBase_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::SubsystemsImplementation::SubsystemProvider*> const& __cordl_internal_get__providerBase_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__running_k__BackingField() const;

  constexpr bool& __cordl_internal_get__running_k__BackingField();

  constexpr void __cordl_internal_set__providerBase_k__BackingField(::UnityEngine::SubsystemsImplementation::SubsystemProvider* value);

  constexpr void __cordl_internal_set__running_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x3269de0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_providerBase, addr 0x3269dd8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::SubsystemsImplementation::SubsystemProvider* get_providerBase();

  /// @brief Method get_running, addr 0x3269dc4, size 0x8, virtual true, abstract: false, final true
  inline bool get_running();

  /// @brief Convert to "::UnityEngine::ISubsystem"
  constexpr ::UnityEngine::ISubsystem* i___UnityEngine__ISubsystem() noexcept;

  /// @brief Method set_running, addr 0x3269dcc, size 0xc, virtual false, abstract: false, final false
  inline void set_running(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubsystemWithProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubsystemWithProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubsystemWithProvider(SubsystemWithProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubsystemWithProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubsystemWithProvider(SubsystemWithProvider const&) = delete;

  /// @brief Field <running>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____running_k__BackingField;

  /// @brief Field <providerBase>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::SubsystemsImplementation::SubsystemProvider* ____providerBase_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SubsystemsImplementation::SubsystemWithProvider, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::SubsystemsImplementation::SubsystemWithProvider, ____running_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SubsystemsImplementation::SubsystemWithProvider, ____providerBase_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::SubsystemsImplementation
NEED_NO_BOX(::UnityEngine::SubsystemsImplementation::SubsystemWithProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SubsystemsImplementation::SubsystemWithProvider*, "UnityEngine.SubsystemsImplementation", "SubsystemWithProvider");
