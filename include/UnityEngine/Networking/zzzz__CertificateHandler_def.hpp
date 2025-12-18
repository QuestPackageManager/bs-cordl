#pragma once
// IWYU pragma private; include "UnityEngine/Networking/CertificateHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CertificateHandler)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::Networking {
class CertificateHandler_BindingsMarshaller;
}
// Forward declare root types
namespace UnityEngine::Networking {
class CertificateHandler;
}
namespace UnityEngine::Networking {
class CertificateHandler_BindingsMarshaller;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Networking::CertificateHandler);
MARK_REF_PTR_T(::UnityEngine::Networking::CertificateHandler_BindingsMarshaller);
// Dependencies System.Object
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: UnityEngine.Networking.CertificateHandler/BindingsMarshaller
class CORDL_TYPE CertificateHandler_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToNative, addr 0x6c5cc90, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToNative(::UnityEngine::Networking::CertificateHandler* handler);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertificateHandler_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CertificateHandler_BindingsMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertificateHandler_BindingsMarshaller(CertificateHandler_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertificateHandler_BindingsMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertificateHandler_BindingsMarshaller(CertificateHandler_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22027 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::CertificateHandler_BindingsMarshaller, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Networking
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: UnityEngine.Networking.CertificateHandler
class CORDL_TYPE CertificateHandler : public ::System::Object {
public:
  // Declarations
  using BindingsMarshaller = ::UnityEngine::Networking::CertificateHandler_BindingsMarshaller;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Create, addr 0x6c5cafc, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr Create(::UnityEngine::Networking::CertificateHandler* obj);

  /// @brief Method Dispose, addr 0x6c5cc5c, size 0x20, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Finalize, addr 0x6c5cc08, size 0x54, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::UnityEngine::Networking::CertificateHandler* New_ctor();

  /// @brief Method ReleaseFromScripting, addr 0x6c5cb38, size 0x50, virtual false, abstract: false, final false
  inline void ReleaseFromScripting();

  /// @brief Method ReleaseFromScripting_Injected, addr 0x6c5cb88, size 0x3c, virtual false, abstract: false, final false
  static inline void ReleaseFromScripting_Injected(::System::IntPtr _unity_self);

  /// @brief Method ValidateCertificate, addr 0x6c5cc7c, size 0x8, virtual true, abstract: false, final false
  inline bool ValidateCertificate(::ArrayW<uint8_t, ::Array<uint8_t>*> certificateData);

  /// @brief Method ValidateCertificateNative, addr 0x6c5cc84, size 0xc, virtual false, abstract: false, final false
  inline bool ValidateCertificateNative(::ArrayW<uint8_t, ::Array<uint8_t>*> certificateData);

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x6c5cbc4, size 0x44, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertificateHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CertificateHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertificateHandler(CertificateHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertificateHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertificateHandler(CertificateHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22028 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Networking::CertificateHandler, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::CertificateHandler, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Networking
NEED_NO_BOX(::UnityEngine::Networking::CertificateHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::CertificateHandler*, "UnityEngine.Networking", "CertificateHandler");
NEED_NO_BOX(::UnityEngine::Networking::CertificateHandler_BindingsMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::CertificateHandler_BindingsMarshaller*, "UnityEngine.Networking", "CertificateHandler/BindingsMarshaller");
