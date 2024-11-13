#pragma once
// IWYU pragma private; include "GlobalNamespace/ICertificateEncryptionProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ICertificateEncryptionProvider)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class ICertificateEncryptionProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ICertificateEncryptionProvider);
// Type: ::ICertificateEncryptionProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ICertificateEncryptionProvider*
class CORDL_TYPE ICertificateEncryptionProvider {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method SignData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SignData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t length);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "ICertificateEncryptionProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICertificateEncryptionProvider(ICertificateEncryptionProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICertificateEncryptionProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICertificateEncryptionProvider(ICertificateEncryptionProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14742 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ICertificateEncryptionProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ICertificateEncryptionProvider*, "", "ICertificateEncryptionProvider");
