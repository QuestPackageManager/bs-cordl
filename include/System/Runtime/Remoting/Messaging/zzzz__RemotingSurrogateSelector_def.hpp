#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(RemotingSurrogateSelector)
namespace System::Runtime::Remoting::Messaging {
class ObjRefSurrogate;
}
namespace System::Runtime::Remoting::Messaging {
class RemotingSurrogate;
}
namespace System::Runtime::Serialization {
class ISerializationSurrogate;
}
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class RemotingSurrogateSelector;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector);
// Type: System.Runtime.Remoting.Messaging::RemotingSurrogateSelector
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// CS Name: ::System.Runtime.Remoting.Messaging::RemotingSurrogateSelector*
class CORDL_TYPE RemotingSurrogateSelector : public ::System::Object {
public:
  // Declarations
  /// @brief Field _next, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__next, put = __cordl_internal_set__next))::System::Runtime::Serialization::ISurrogateSelector* _next;

  /// @brief Field _objRefSurrogate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__objRefSurrogate, put = setStaticF__objRefSurrogate))::System::Runtime::Remoting::Messaging::ObjRefSurrogate* _objRefSurrogate;

  /// @brief Field _objRemotingSurrogate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__objRemotingSurrogate, put = setStaticF__objRemotingSurrogate))::System::Runtime::Remoting::Messaging::RemotingSurrogate* _objRemotingSurrogate;

  /// @brief Field s_cachedTypeObjRef, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_cachedTypeObjRef, put = setStaticF_s_cachedTypeObjRef))::System::Type* s_cachedTypeObjRef;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISurrogateSelector"
  constexpr operator ::System::Runtime::Serialization::ISurrogateSelector*() noexcept;

  /// @brief Method GetSurrogate, addr 0x260824c, size 0x194, virtual true, abstract: false, final false
  inline ::System::Runtime::Serialization::ISerializationSurrogate* GetSurrogate(::System::Type* type, ::System::Runtime::Serialization::StreamingContext context,
                                                                                 ByRef<::System::Runtime::Serialization::ISurrogateSelector*> ssout);

  static inline ::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector* New_ctor();

  constexpr ::System::Runtime::Serialization::ISurrogateSelector*& __cordl_internal_get__next();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::ISurrogateSelector*> const& __cordl_internal_get__next() const;

  constexpr void __cordl_internal_set__next(::System::Runtime::Serialization::ISurrogateSelector* value);

  /// @brief Method .ctor, addr 0x25fa51c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Runtime::Remoting::Messaging::ObjRefSurrogate* getStaticF__objRefSurrogate();

  static inline ::System::Runtime::Remoting::Messaging::RemotingSurrogate* getStaticF__objRemotingSurrogate();

  static inline ::System::Type* getStaticF_s_cachedTypeObjRef();

  /// @brief Convert to "::System::Runtime::Serialization::ISurrogateSelector"
  constexpr ::System::Runtime::Serialization::ISurrogateSelector* i___System__Runtime__Serialization__ISurrogateSelector() noexcept;

  static inline void setStaticF__objRefSurrogate(::System::Runtime::Remoting::Messaging::ObjRefSurrogate* value);

  static inline void setStaticF__objRemotingSurrogate(::System::Runtime::Remoting::Messaging::RemotingSurrogate* value);

  static inline void setStaticF_s_cachedTypeObjRef(::System::Type* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RemotingSurrogateSelector();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RemotingSurrogateSelector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RemotingSurrogateSelector(RemotingSurrogateSelector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RemotingSurrogateSelector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RemotingSurrogateSelector(RemotingSurrogateSelector const&) = delete;

  /// @brief Field _next, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Serialization::ISurrogateSelector* ____next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector, ____next) == 0x10, "Offset mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector*, "System.Runtime.Remoting.Messaging", "RemotingSurrogateSelector");
