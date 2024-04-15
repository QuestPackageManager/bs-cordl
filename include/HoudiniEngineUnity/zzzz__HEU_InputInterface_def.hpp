#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_InputInterface)
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_InputInterface;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_InputInterface);
// Type: HoudiniEngineUnity::HEU_InputInterface
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_InputInterface*
class CORDL_TYPE HEU_InputInterface : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Priority)) int32_t Priority;

  /// @brief Field _priority, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__priority, put = __cordl_internal_set__priority)) int32_t _priority;

  /// @brief Method CreateInputNodeWithDataUpload, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool CreateInputNodeWithDataUpload(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t connectNodeID, ::UnityEngine::GameObject* inputObject, ByRef<int32_t> inputNodeID);

  /// @brief Method IsThisInputObjectSupported, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsThisInputObjectSupported(::UnityEngine::GameObject* inputObject);

  static inline ::HoudiniEngineUnity::HEU_InputInterface* New_ctor(int32_t priority);

  /// @brief Method RegisterInterface, addr 0x24b1518, size 0x58, virtual false, abstract: false, final false
  inline void RegisterInterface();

  constexpr int32_t const& __cordl_internal_get__priority() const;

  constexpr int32_t& __cordl_internal_get__priority();

  constexpr void __cordl_internal_set__priority(int32_t value);

  /// @brief Method .ctor, addr 0x24b14f0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t priority);

  /// @brief Method get_Priority, addr 0x24b14e8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Priority();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_InputInterface();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputInterface", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_InputInterface(HEU_InputInterface&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputInterface", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_InputInterface(HEU_InputInterface const&) = delete;

  /// @brief Field _priority, offset: 0x10, size: 0x4, def value: None
  int32_t ____priority;

  /// @brief Field DEFAULT_PRIORITY offset 0xffffffff size 0x4
  static constexpr int32_t DEFAULT_PRIORITY{ static_cast<int32_t>(0x64) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_InputInterface, 0x18>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputInterface, ____priority) == 0x10, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputInterface);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputInterface*, "HoudiniEngineUnity", "HEU_InputInterface");
