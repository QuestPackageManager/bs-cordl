#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__RandomNumberGenerator_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RNGCryptoServiceProvider)
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2945)), TypeDefinitionIndex(TypeDefinitionIndex(2601))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2981))
// CS Name: ::System.Security.Cryptography::RNGCryptoServiceProvider*
class CORDL_TYPE RNGCryptoServiceProvider : public ::System::Security::Cryptography::RandomNumberGenerator {
public:
  // Declarations
  /// @brief Field _handle, offset 0x10, size 0x8
  __declspec(property(get = __get__handle, put = __set__handle)) void* _handle;

  /// @brief Field _lock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__lock, put = setStaticF__lock))::System::Object* _lock;

  constexpr void*& __get__handle();

  constexpr void* const& __get__handle() const;

  constexpr void __set__handle(void* value);

  static inline void setStaticF__lock(::System::Object* value);

  static inline ::System::Object* getStaticF__lock();

  static inline ::System::Security::Cryptography::RNGCryptoServiceProvider* New_ctor();

  /// @brief Method .ctor addr 0x23130ac size 0x98 virtual false final false
  inline void _ctor();

  /// @brief Method Check addr 0x2319fe0 size 0xb4 virtual false final false
  inline void Check();

  /// @brief Method RngOpen addr 0x2319fd8 size 0x4 virtual false final false
  static inline bool RngOpen();

  /// @brief Method RngInitialize addr 0x2319fdc size 0x4 virtual false final false
  static inline void* RngInitialize(::cordl_internals::Ptr<uint8_t> seed, void* seed_length);

  /// @brief Method RngGetBytes addr 0x231a094 size 0x4 virtual false final false
  static inline void* RngGetBytes(void* handle, ::cordl_internals::Ptr<uint8_t> data, void* data_length);

  /// @brief Method RngClose addr 0x231a098 size 0x4 virtual false final false
  static inline void RngClose(void* handle);

  /// @brief Method GetBytes addr 0x231a09c size 0x21c virtual true final false
  inline void GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method Finalize addr 0x231a2b8 size 0x118 virtual true final false
  inline void Finalize();

  /// @brief Method Dispose addr 0x231a3d0 size 0xc virtual true final false
  inline void Dispose(bool disposing);

  // Ctor Parameters [CppParam { name: "", ty: "RNGCryptoServiceProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RNGCryptoServiceProvider(RNGCryptoServiceProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RNGCryptoServiceProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RNGCryptoServiceProvider(RNGCryptoServiceProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RNGCryptoServiceProvider();

public:
  /// @brief Field _handle, offset: 0x10, size: 0x8, def value: None
  void* ____handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RNGCryptoServiceProvider, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RNGCryptoServiceProvider, ____handle) == 0x10, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::RNGCryptoServiceProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RNGCryptoServiceProvider*, "System.Security.Cryptography", "RNGCryptoServiceProvider");
