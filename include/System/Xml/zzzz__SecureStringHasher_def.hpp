#pragma once
// IWYU pragma private; include "System/Xml/SecureStringHasher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecureStringHasher)
namespace System::Xml {
class SecureStringHasher_HashCodeOfStringDelegate;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml {
class SecureStringHasher;
}
namespace System::Xml {
class SecureStringHasher_HashCodeOfStringDelegate;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::SecureStringHasher);
MARK_REF_PTR_T(::System::Xml::SecureStringHasher_HashCodeOfStringDelegate);
// Dependencies System.MulticastDelegate
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.SecureStringHasher/HashCodeOfStringDelegate
class CORDL_TYPE SecureStringHasher_HashCodeOfStringDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x431a144, size 0x14, virtual true, abstract: false, final false
  inline int32_t Invoke(::StringW s, int32_t sLen, int64_t additionalEntropy);

  static inline ::System::Xml::SecureStringHasher_HashCodeOfStringDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x431a0a4, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecureStringHasher_HashCodeOfStringDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SecureStringHasher_HashCodeOfStringDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecureStringHasher_HashCodeOfStringDelegate(SecureStringHasher_HashCodeOfStringDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecureStringHasher_HashCodeOfStringDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecureStringHasher_HashCodeOfStringDelegate(SecureStringHasher_HashCodeOfStringDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7206 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::SecureStringHasher_HashCodeOfStringDelegate, 0x80>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Collections.Generic.IEqualityComparer`1<T>, System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.SecureStringHasher
class CORDL_TYPE SecureStringHasher : public ::System::Object {
public:
  // Declarations
  using HashCodeOfStringDelegate = ::System::Xml::SecureStringHasher_HashCodeOfStringDelegate;

  /// @brief Field hashCodeDelegate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_hashCodeDelegate, put = setStaticF_hashCodeDelegate)) ::System::Xml::SecureStringHasher_HashCodeOfStringDelegate* hashCodeDelegate;

  /// @brief Field hashCodeRandomizer, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_hashCodeRandomizer, put = __cordl_internal_set_hashCodeRandomizer)) int32_t hashCodeRandomizer;

  /// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::StringW>"
  constexpr operator ::System::Collections::Generic::IEqualityComparer_1<::StringW>*() noexcept;

  /// @brief Method Equals, addr 0x4319e30, size 0x18, virtual true, abstract: false, final true
  inline bool Equals(::StringW x, ::StringW y);

  /// @brief Method GetHashCode, addr 0x4319e48, size 0x9c, virtual true, abstract: false, final true
  inline int32_t GetHashCode(::StringW key);

  /// @brief Method GetHashCodeDelegate, addr 0x4319ee4, size 0x154, virtual false, abstract: false, final false
  static inline ::System::Xml::SecureStringHasher_HashCodeOfStringDelegate* GetHashCodeDelegate();

  /// @brief Method GetHashCodeOfString, addr 0x431a038, size 0x6c, virtual false, abstract: false, final false
  static inline int32_t GetHashCodeOfString(::StringW key, int32_t sLen, int64_t additionalEntropy);

  static inline ::System::Xml::SecureStringHasher* New_ctor();

  constexpr int32_t const& __cordl_internal_get_hashCodeRandomizer() const;

  constexpr int32_t& __cordl_internal_get_hashCodeRandomizer();

  constexpr void __cordl_internal_set_hashCodeRandomizer(int32_t value);

  /// @brief Method .ctor, addr 0x4319e0c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Xml::SecureStringHasher_HashCodeOfStringDelegate* getStaticF_hashCodeDelegate();

  /// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::StringW>"
  constexpr ::System::Collections::Generic::IEqualityComparer_1<::StringW>* i___System__Collections__Generic__IEqualityComparer_1___StringW_() noexcept;

  static inline void setStaticF_hashCodeDelegate(::System::Xml::SecureStringHasher_HashCodeOfStringDelegate* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecureStringHasher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SecureStringHasher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecureStringHasher(SecureStringHasher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecureStringHasher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecureStringHasher(SecureStringHasher const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7207 };

  /// @brief Field hashCodeRandomizer, offset: 0x10, size: 0x4, def value: None
  int32_t ___hashCodeRandomizer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::SecureStringHasher, ___hashCodeRandomizer) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::SecureStringHasher, 0x18>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::SecureStringHasher);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::SecureStringHasher*, "System.Xml", "SecureStringHasher");
NEED_NO_BOX(::System::Xml::SecureStringHasher_HashCodeOfStringDelegate);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::SecureStringHasher_HashCodeOfStringDelegate*, "System.Xml", "SecureStringHasher/HashCodeOfStringDelegate");
