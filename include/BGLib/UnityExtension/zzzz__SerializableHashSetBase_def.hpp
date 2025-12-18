#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/SerializableHashSetBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SerializableHashSetBase)
namespace BGLib::UnityExtension {
template <typename TValue> class SerializableHashSetBase_HashSet_1;
}
namespace BGLib::UnityExtension {
class SerializableHashSetBase_Storage;
}
namespace System::Collections::Generic {
template <typename T> class ISet_1;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace BGLib::UnityExtension {
class SerializableHashSetBase;
}
namespace BGLib::UnityExtension {
template <typename TValue> class SerializableHashSetBase_HashSet_1;
}
namespace BGLib::UnityExtension {
class SerializableHashSetBase_Storage;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::UnityExtension::SerializableHashSetBase);
MARK_GEN_REF_PTR_T(::BGLib::UnityExtension::SerializableHashSetBase_HashSet_1);
MARK_REF_PTR_T(::BGLib::UnityExtension::SerializableHashSetBase_Storage);
// Dependencies System.Object
namespace BGLib::UnityExtension {
// Is value type: false
// CS Name: BGLib.UnityExtension.SerializableHashSetBase/Storage
class CORDL_TYPE SerializableHashSetBase_Storage : public ::System::Object {
public:
  // Declarations
  static inline ::BGLib::UnityExtension::SerializableHashSetBase_Storage* New_ctor();

  /// @brief Method .ctor, addr 0x322f00c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializableHashSetBase_Storage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializableHashSetBase_Storage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializableHashSetBase_Storage(SerializableHashSetBase_Storage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializableHashSetBase_Storage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializableHashSetBase_Storage(SerializableHashSetBase_Storage const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20740 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::SerializableHashSetBase_Storage, 0x10>, "Size mismatch!");

} // namespace BGLib::UnityExtension
// Dependencies System.Collections.Generic.HashSet`1<T>
namespace BGLib::UnityExtension {
// cpp template
template <typename TValue>
// Is value type: false
// CS Name: BGLib.UnityExtension.SerializableHashSetBase/HashSet`1<TValue>
class CORDL_TYPE SerializableHashSetBase_HashSet_1 : public ::System::Collections::Generic::HashSet_1<TValue> {
public:
  // Declarations
  static inline ::BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<TValue>* New_ctor();

  static inline ::BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<TValue>* New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                             ::System::Runtime::Serialization::StreamingContext context);

  static inline ::BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<TValue>* New_ctor(::System::Collections::Generic::ISet_1<TValue>* set);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::ISet_1<TValue>* set);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializableHashSetBase_HashSet_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializableHashSetBase_HashSet_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializableHashSetBase_HashSet_1(SerializableHashSetBase_HashSet_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializableHashSetBase_HashSet_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializableHashSetBase_HashSet_1(SerializableHashSetBase_HashSet_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20741 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGLib::UnityExtension
// Dependencies System.Object
namespace BGLib::UnityExtension {
// Is value type: false
// CS Name: BGLib.UnityExtension.SerializableHashSetBase
class CORDL_TYPE SerializableHashSetBase : public ::System::Object {
public:
  // Declarations
  template <typename TValue> using HashSet_1 = ::BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<TValue>;

  using Storage = ::BGLib::UnityExtension::SerializableHashSetBase_Storage;

  static inline ::BGLib::UnityExtension::SerializableHashSetBase* New_ctor();

  /// @brief Method .ctor, addr 0x322f008, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializableHashSetBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializableHashSetBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializableHashSetBase(SerializableHashSetBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializableHashSetBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializableHashSetBase(SerializableHashSetBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20742 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::SerializableHashSetBase, 0x10>, "Size mismatch!");

} // namespace BGLib::UnityExtension
NEED_NO_BOX(::BGLib::UnityExtension::SerializableHashSetBase);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::SerializableHashSetBase*, "BGLib.UnityExtension", "SerializableHashSetBase");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BGLib::UnityExtension::SerializableHashSetBase_HashSet_1, "BGLib.UnityExtension", "SerializableHashSetBase/HashSet`1");
NEED_NO_BOX(::BGLib::UnityExtension::SerializableHashSetBase_Storage);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::SerializableHashSetBase_Storage*, "BGLib.UnityExtension", "SerializableHashSetBase/Storage");
