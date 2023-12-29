#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativeUpdateCallback)
namespace System {
class Object;
}
namespace UnityEngineInternal::Input {
struct NativeInputEventBuffer;
}
namespace UnityEngineInternal::Input {
struct NativeInputUpdateType;
}
// Forward declare root types
namespace UnityEngineInternal::Input {
class NativeUpdateCallback;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngineInternal::Input::NativeUpdateCallback);
// Type: UnityEngineInternal.Input::NativeUpdateCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngineInternal::Input {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2609))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15961))
// CS Name: ::UnityEngineInternal.Input::NativeUpdateCallback*
class CORDL_TYPE NativeUpdateCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngineInternal::Input::NativeUpdateCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x2ba8898 size 0xc4 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x2ba895c size 0x14 virtual true final false
  inline void Invoke(::UnityEngineInternal::Input::NativeInputUpdateType updateType, ::cordl_internals::Ptr<::UnityEngineInternal::Input::NativeInputEventBuffer> buffer);

  // Ctor Parameters [CppParam { name: "", ty: "NativeUpdateCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeUpdateCallback(NativeUpdateCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeUpdateCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeUpdateCallback(NativeUpdateCallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeUpdateCallback();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngineInternal::Input::NativeUpdateCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngineInternal::Input
NEED_NO_BOX(::UnityEngineInternal::Input::NativeUpdateCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngineInternal::Input::NativeUpdateCallback*, "UnityEngineInternal.Input", "NativeUpdateCallback");
