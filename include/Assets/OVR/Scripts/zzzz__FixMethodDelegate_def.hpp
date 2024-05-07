#pragma once
// IWYU pragma private; include "Assets/OVR/Scripts/FixMethodDelegate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FixMethodDelegate)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Assets::OVR::Scripts {
class FixMethodDelegate;
}
// Write type traits
MARK_REF_PTR_T(::Assets::OVR::Scripts::FixMethodDelegate);
// Type: Assets.OVR.Scripts::FixMethodDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Assets::OVR::Scripts {
// Is value type: false
// CS Name: ::Assets.OVR.Scripts::FixMethodDelegate*
class CORDL_TYPE FixMethodDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bcc654, size 0xc4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Object* obj, bool isLastInSet, int32_t selectedIndex, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bcc718, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bcc63c, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Object* obj, bool isLastInSet, int32_t selectedIndex);

  static inline ::Assets::OVR::Scripts::FixMethodDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2bcc50c, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FixMethodDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FixMethodDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FixMethodDelegate(FixMethodDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FixMethodDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FixMethodDelegate(FixMethodDelegate const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Assets::OVR::Scripts::FixMethodDelegate, 0x80>, "Size mismatch!");

} // namespace Assets::OVR::Scripts
NEED_NO_BOX(::Assets::OVR::Scripts::FixMethodDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Assets::OVR::Scripts::FixMethodDelegate*, "Assets.OVR.Scripts", "FixMethodDelegate");
