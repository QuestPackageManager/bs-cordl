#pragma once
// IWYU pragma private; include "UnityEngine/Networking/CertificateHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CertificateHandler)
// Forward declare root types
namespace UnityEngine::Networking {
class CertificateHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Networking::CertificateHandler);
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: UnityEngine.Networking.CertificateHandler
class CORDL_TYPE CertificateHandler : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  /// @brief Method Dispose, addr 0x4ae5340, size 0x58, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Release, addr 0x4ae52f0, size 0x3c, virtual false, abstract: false, final false
  inline void Release();

  /// @brief Method ValidateCertificate, addr 0x4ae532c, size 0x8, virtual true, abstract: false, final false
  inline bool ValidateCertificate(::ArrayW<uint8_t, ::Array<uint8_t>*> certificateData);

  /// @brief Method ValidateCertificateNative, addr 0x4ae5334, size 0xc, virtual false, abstract: false, final false
  inline bool ValidateCertificateNative(::ArrayW<uint8_t, ::Array<uint8_t>*> certificateData);

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18243 };

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
