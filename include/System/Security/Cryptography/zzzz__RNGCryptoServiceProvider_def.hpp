#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RNGCryptoServiceProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__RandomNumberGenerator_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RNGCryptoServiceProvider)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RNGCryptoServiceProvider;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::RNGCryptoServiceProvider);
// Type: System.Security.Cryptography::RNGCryptoServiceProvider
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::RNGCryptoServiceProvider*
class CORDL_TYPE RNGCryptoServiceProvider : public ::System::Security::Cryptography::RandomNumberGenerator {
public:
  // Declarations
  /// @brief Field _handle, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__handle, put = __cordl_internal_set__handle))::System::IntPtr _handle;

  /// @brief Field _lock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__lock, put = setStaticF__lock))::System::Object* _lock;

  /// @brief Method Check, addr 0x2820740, size 0xb4, virtual false, abstract: false, final false
  inline void Check();

  /// @brief Method Dispose, addr 0x2820b30, size 0xc, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x2820a18, size 0x118, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetBytes, addr 0x28207fc, size 0x21c, virtual true, abstract: false, final false
  inline void GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  static inline ::System::Security::Cryptography::RNGCryptoServiceProvider* New_ctor();

  /// @brief Method RngClose, addr 0x28207f8, size 0x4, virtual false, abstract: false, final false
  static inline void RngClose(::System::IntPtr handle);

  /// @brief Method RngGetBytes, addr 0x28207f4, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr RngGetBytes(::System::IntPtr handle, ::cordl_internals::Ptr<uint8_t> data, ::System::IntPtr data_length);

  /// @brief Method RngInitialize, addr 0x282073c, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr RngInitialize(::cordl_internals::Ptr<uint8_t> seed, ::System::IntPtr seed_length);

  /// @brief Method RngOpen, addr 0x28206a0, size 0x4, virtual false, abstract: false, final false
  static inline bool RngOpen();

  constexpr ::System::IntPtr const& __cordl_internal_get__handle() const;

  constexpr ::System::IntPtr& __cordl_internal_get__handle();

  constexpr void __cordl_internal_set__handle(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x28206a4, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Object* getStaticF__lock();

  static inline void setStaticF__lock(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RNGCryptoServiceProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RNGCryptoServiceProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RNGCryptoServiceProvider(RNGCryptoServiceProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RNGCryptoServiceProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RNGCryptoServiceProvider(RNGCryptoServiceProvider const&) = delete;

  /// @brief Field _handle, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ____handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RNGCryptoServiceProvider, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RNGCryptoServiceProvider, ____handle) == 0x10, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::RNGCryptoServiceProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RNGCryptoServiceProvider*, "System.Security.Cryptography", "RNGCryptoServiceProvider");
