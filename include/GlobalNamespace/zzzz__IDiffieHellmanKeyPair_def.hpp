#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IDiffieHellmanKeyPair)
namespace BGNet::Core {
class ITaskUtility;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
class IDiffieHellmanKeyPair;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IDiffieHellmanKeyPair);
// Type: ::IDiffieHellmanKeyPair
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12639))
// CS Name: ::IDiffieHellmanKeyPair*
class CORDL_TYPE IDiffieHellmanKeyPair {
public:
  // Declarations
  __declspec(property(get = get_publicKey))::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey;

  /// @brief Method get_publicKey addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_publicKey();

  /// @brief Method GetPreMasterSecretAsync addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* GetPreMasterSecretAsync(::BGNet::Core::ITaskUtility* taskUtility,
                                                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> clientPublicKey);

  /// @brief Method GetPreMasterSecret addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPreMasterSecret(::ArrayW<uint8_t, ::Array<uint8_t>*> clientPublicKey);

  // Ctor Parameters [CppParam { name: "", ty: "IDiffieHellmanKeyPair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDiffieHellmanKeyPair(IDiffieHellmanKeyPair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDiffieHellmanKeyPair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDiffieHellmanKeyPair(IDiffieHellmanKeyPair const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IDiffieHellmanKeyPair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IDiffieHellmanKeyPair*, "", "IDiffieHellmanKeyPair");
