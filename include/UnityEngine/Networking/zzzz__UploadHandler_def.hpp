#pragma once
// IWYU pragma private; include "UnityEngine/Networking/UploadHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UploadHandler)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::Networking {
class UploadHandler_BindingsMarshaller;
}
// Forward declare root types
namespace UnityEngine::Networking {
class UploadHandler;
}
namespace UnityEngine::Networking {
class UploadHandler_BindingsMarshaller;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Networking::UploadHandler);
MARK_REF_PTR_T(::UnityEngine::Networking::UploadHandler_BindingsMarshaller);
// Dependencies System.Object
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: UnityEngine.Networking.UploadHandler/BindingsMarshaller
class CORDL_TYPE UploadHandler_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToNative, addr 0x6bf6dc8, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToNative(::UnityEngine::Networking::UploadHandler* uploadHandler);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UploadHandler_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UploadHandler_BindingsMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UploadHandler_BindingsMarshaller(UploadHandler_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UploadHandler_BindingsMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UploadHandler_BindingsMarshaller(UploadHandler_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21987 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::UploadHandler_BindingsMarshaller, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Networking
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: UnityEngine.Networking.UploadHandler
class CORDL_TYPE UploadHandler : public ::System::Object {
public:
  // Declarations
  using BindingsMarshaller = ::UnityEngine::Networking::UploadHandler_BindingsMarshaller;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x6bf6da8, size 0x20, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method Finalize, addr 0x6bf6d5c, size 0x4c, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::UnityEngine::Networking::UploadHandler* New_ctor();

  /// @brief Method ReleaseFromScripting, addr 0x6bf6ccc, size 0x50, virtual false, abstract: false, final false
  inline void ReleaseFromScripting();

  /// @brief Method ReleaseFromScripting_Injected, addr 0x6bf6d1c, size 0x3c, virtual false, abstract: false, final false
  static inline void ReleaseFromScripting_Injected(::System::IntPtr _unity_self);

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x6bf6d58, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UploadHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UploadHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UploadHandler(UploadHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UploadHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UploadHandler(UploadHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21988 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Networking::UploadHandler, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::UploadHandler, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Networking
NEED_NO_BOX(::UnityEngine::Networking::UploadHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::UploadHandler*, "UnityEngine.Networking", "UploadHandler");
NEED_NO_BOX(::UnityEngine::Networking::UploadHandler_BindingsMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::UploadHandler_BindingsMarshaller*, "UnityEngine.Networking", "UploadHandler/BindingsMarshaller");
